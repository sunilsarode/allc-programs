#include<bits/stdc++.h>
using namespace std;

    struct Data{
       int i;
       int j;
        
    };
    
    bool inrange(int x,int y){
        if(x<0||x>=1000000||y<0||y>=1000000){
            return false;
        }
        return true;
    }

    
    bool isEscapePossible(vector<vector<int>>& blocked, vector<int>& source, vector<int>& target) {
        
        int arrx[]={1,-1,0,0};
        int arry[]={0,0,1,-1};
        
        //vector<vector<int>> arr(1000000,vector<int>(1000000,0));
        
        if(blocked.size()==0){
           return true;   
        }
        int n=blocked.size();
        
        unordered_map<string,int> mp;
        unordered_map<string,int> vis;
        
        for(int i=0;i<n;i++){
            string s;
            s+=to_string(blocked[i][0]);
            s+="-";
            s+=to_string(blocked[i][1]);
            mp[s]++;
            cout<<s<<endl;
        }

        unordered_map<string,int>::iterator it;
 
        for(it=mp.begin();it!=mp.end();it++){
             cout<<it->first<<" "<<it->second<<endl;
        }
        
 
        
        int si=source[0];
        int sj=source[1];
        
        Data d;
        d.i=si;
        d.j=sj;
      
        string v;
        v+=to_string(si);
        v+="-";
        v+=to_string(sj);
        vis[v]++;

        cout<<v<<endl;
               
        int ei=target[0];
        int ej=target[1];

        cout<<ei<<" "<<ej<<endl;
        
        queue<Data> q;
        q.push(d);
        
        int f=0;
        while(!q.empty()){
            Data in=q.front();
            q.pop();
            
            if(in.i==ei&&in.j==ej){
                f=1;
                break;
            }
            
            for(int i=0;i<4;i++){
                 
                int x=arrx[i]+in.i;
                int y=arry[i]+in.j;
                
                cout<<x<<" "<<y<<endl;
                string str;
                str+=to_string(x);
                str+="-";
                str+=to_string(y);
                
                if(inrange(x,y)&&mp.find(str)==mp.end()&&vis.find(str)==vis.end()){
                    
                    
                    Data newd;
                    newd.i=x;
                    newd.j=y;
                    q.push(newd);
                    vis[str]++;
                }
            }
            
        }
        
        if(f==0){
            return false;
        }else{
            return true;
        }
        
        
    }

int main(){

  vector<vector<int>> b(1,vector<int>(2,0));
  vector<int> v(2);
  v[0]=0;
  v[1]=1;
  b[0]=v;
  
  vector<int> src(2);
  src[0]=0;
  src[1]=0;

  vector<int> target(2);
  target[0]=999999;
  target[1]=999999;

  cout<<isEscapePossible(b,src,target)<<endl;
  
return 0;
}
