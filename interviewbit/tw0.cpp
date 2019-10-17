vector<int> Solution::searchRange(const vector<int> &arr, int x) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
    int n=arr.size();
        int low=0;
        int high=n-1;
        int l=-1;
        while(low<=high){
            
            int mid=low+(high-low)/2;
            //mid is zero then low==high and v[mid]==x ,otherwise
            if((mid==0&&arr[mid]==x)||(mid>0&&x>arr[mid-1]&&arr[mid]==x)){
              
                l=mid;
                break;
            }else if(x>arr[mid]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        
        if(l!=-1){
           
           low=0;
           high=n-1;
           int r=-1;
           while(low<=high){
            
            int mid=low+(high-low)/2;
            
            if((mid==n-1&&arr[mid]==x)||(mid+1<n&&x<arr[mid+1]&&arr[mid]==x)){
                r=mid;
                break;
            }else if(x<arr[mid]){
                high=mid-1;
            }else{
                low=mid+1;
                
            }
        }
            
            //cout<<l<<" "<<r<<endl;
          vector<int> f(2);
            f[0]=l;
            f[1]=r;
            
            return f;
        }else{
            vector<int> f(2);
            f[0]=-1;
            f[1]=-1;
            return f;
        }
}
