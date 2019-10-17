#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
vector<int> vec;
while(scanf("%d",&n)!=EOF){

 
  if(n==0){
      vec.clear();
      printf("\n");
  }else if(n==-1){
 
     int s=vec.size();
     //cout<<s<<endl;
    
         int p=(s-1)/2;
         //cout<<vec[p]<<endl;
         printf("%d\n",vec[p]);
         vec.erase(vec.begin()+p);
     
  }else{
    vec.push_back(n);

  }   

}

return 0;
}
