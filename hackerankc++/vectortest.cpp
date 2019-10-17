#include<bits/stdc++.h>

using namespace std;


int jumpingOnClouds(vector<int> c) {

    int n=c.size();
    cout<<n<<endl;
    int count=0;
    for(int i=0;i<n;){
       if(i+2<n && c[i+2]==0){
          count+=1;
          i+=2;
       }else if(i+1<n&& c[i+1]==0){
           count+=1;
           i++;
       }else{
            i++;
        }

    }
    return count;
}

int main(){

vector<int> vec;
int in=0;
for(int i=0;i<7;i++){
   cin>>in;
   vec.push_back(in);
}
cout<<vec[0]<<endl;
cout<<vec.size()<<endl;
jumpingOnClouds(vec);
return 0;
}


