#include<bits/stdc++.h>
#define max 10000001
using namespace std;

int main(){


int *arr=(int *)malloc(max*sizeof(int));

for(int i=0;i<max;i++){
  arr[i]=1;
}
arr[0]=0;
arr[1]=0;
for(int i=2;i*i<max;i++){
  if(arr[i]){
     for(int j=2*i;j<max;j+=i){
        arr[j]=0;         
    }
  }
}
/**vector<int> vec;
vec.push_back(2);
for(int i=3;i<max;i+=2){
   if(arr[i])
     vec.push_back(i);
}
cout<<vec[vec.size()-1];**/
int t;
cin>>t;
while(t-->0){
  int n;
  //cin>>n;
  scanf("%d",&n);
  if(arr[n]){
    // cout<<n<<endl;
     printf("%d\n",n);
     continue;
  }
  int c1,c2;
  c1=n;c2=n;
  while(arr[--c1]==0);

  while(arr[++c2]==0);

  if((n-c1)==(c2-n)){
     //cout<<c1<<endl;
     printf("%d\n",c1);
  }else{
     int v1=n-c1;
   //  cout<<v1<<endl;
     int v2=c2-n;
   //  cout<<v2<<endl;

   //  cout<<"c1"<<c1<<endl;
   //  cout<<"c2"<<c2<<endl;
     if(v1<v2){
        //cout<<c1<<endl;
        printf("%d\n",c1);
     }else{
        //cout<<c2<<endl;
        printf("%d\n",c2); 
     }
  }
   
}

return 0;
}
