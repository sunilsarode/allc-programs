#include<bits/stdc++.h>
using namespace std;
int main(){



int t;
//cin>>t;
scanf("%d",&t);
int tc=0;
string cs="Case "; 
while(t-->0){
tc++;
//cout<<cs+to_string(tc)+":"<<endl;
string str=cs+to_string(tc)+":";
printf("%s\n",str.c_str());

list<int> li;
list<pair<int,int>> lis;
int n,val;
//cin>>n;
scanf("%d",&n);
char s[10];

for(int i=0;i<n;i++){
 //cin>>s;
 scanf("%s",s);
  if(s[0]=='A'){
     //cin>>val;
      scanf("%d",&val);
     li.push_back(val);
     if(lis.empty()){
        lis.push_back(make_pair(val,val));
     }else{
        pair<int,int> p=lis.back();
        lis.push_back(make_pair(val,max(p.second,val)));
    }
     
  }else if(s[0]=='Q'){
     if(li.empty()){
       // cout<<"Empty"<<endl;
        printf("%s\n","Empty");
     }else{
         pair<int,int> p=lis.back();
        //cout<<p.second<<endl;
        int ans=p.second;  
        printf("%d\n",ans);
     }
  }else if(s[0]=='R'){
    if(!li.empty()){ 
       li.pop_back();
       lis.pop_back();
    }
  }
}

}
return 0;
}
