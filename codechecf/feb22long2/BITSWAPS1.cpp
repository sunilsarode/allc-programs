#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


class DS{
 
 private :
    vector<ll> arr;
    vector<ll> size;
    
    int nn;
 public:
 
   DS(int n){
        nn=n;
	arr.resize(n);
	size.resize(n);

   }
   
   void init(){
      for(int i=0;i<nn;i++){
         arr[i]=i;
         size[i]=1;   
      }
   }
          
   void weighted_union(int a,int b)
    {
        int root_A = root(a);
        int root_B = root(b);
        if(size[root_A] < size[root_B ])
        {
    		arr[ root_A ] = arr[root_B];
    		size[root_B] += size[root_A];
    	}
        else
        {
    		arr[ root_B ] = arr[root_A];
    		size[root_A] += size[root_B];
    	}

    }
    
        //finding root of an element
    int root(int i){
        while(arr[ i ] != i)           //chase parent of current element until it reaches root
        {
         i = arr[ i ];
        }
        return i;
    }
    
   bool find(int A,int B){
        if(root(A)==root(B))       //if A and B have the same root, it means that they are connected.
        return true;
        else
        return false;
    }

};

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  	
  int t;
  cin>>t;
  while(t--){
    
    int n;
    cin>>n;
    vector<ll> arr(n);
    vector<ll> carr(n);
   
    for(int i=0;i<n;i++){
       cin>>arr[i];
       carr[i]=arr[i];    
 
    }
    
    sort(carr.begin(),carr.end());

 
    DS ds(32);
    ds.init();
    for(int x : arr){
        for(int i=0;i<32;i++){
            for(int j=0;j<32;j++){
                if((x&(1LL<<i))!=0 &&(x&(1LL<<j))!=0){
                    //add to set
                    ds.weighted_union(i,j);
                }
            }
        }
    }	 
    
    int f=1;   
    
    for(int i=0;i<n;i++){
        int canSwap=0;
    	 for(int j=0;j<32;j++){
            for(int k=0;k<32;k++){
                if((arr[i]&(1<<j))!=0 &&(carr[i]&(1<<k))!=0 && ds.find(j,k)){
                    canSwap=1;
                }
            }
        }
        
        if(canSwap ==0){
           f=0;
           break;
        }
        
    }
    
    if(f==0){
       cout<<"NO"<<"\n";
    }else{
       cout<<"YES"<<"\n";
    }
    
   
  }
       
  return 0;
}

