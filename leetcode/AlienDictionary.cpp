#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    /**
     * @param words: a list of words
     * @return: a string which is correct order
     */
    string alienOrder(vector<string> &words) {
        // Write your code here
        
        map<char,set<char>> mp;
        
        vector<int> indegree(26,0);

        buildGraph(mp,indegree,words);
       /* cout<<mp.size()<<endl;
       
        for(auto it:mp){
            cout<<it.first<<" ";
            for(auto x:	it.second){
                 cout<<x<<" ";
            }
            cout<<endl;
        } 

        
        for(int i=0;i<26;i++){
           cout<<indegree[i]<<" ";
        }
        cout<<endl;*/
        
        priority_queue<char,vector<char>,greater<char>> q;
        //queue<char> q;
        for(auto it:mp){
            if(indegree[it.first-'a']==0){
                 q.push(it.first);
            }
           
        }
        cout<<q.size()<<endl;
        string ans="";
        while(!q.empty()){
            char f=q.top();
            q.pop();
            ans+=f;
            set<char> st=mp[f];

            for(auto x:st){ 
                 indegree[x-'a']--;
                 if(indegree[x-'a']==0){
                        q.push(x);
                 }
            }
        }

        cout<<mp.size()<<endl;
         
        return ans.size()==mp.size()?ans:"";
     
    }
    
    void buildGraph(map<char,set<char>>& mp, vector<int>& indegree,vector<string>& words){
        
        for(int i=0;i<words.size();i++){
             for(int j=0;j<words[i].size();j++){
                // if(mp.find(words[i][j])==mp.end()){
                     set<char> st;
                     mp.insert({words[i][j],st});
                // }
             }
        }

 
        
        for(int i=1;i<words.size();i++){
            
            string first=words[i-1];
            string second=words[i];
            
            int len=min(first.size(),second.size());
            
            for(int j=0;j<len;j++){
                 char p=first[j];
                 char c=second[j];
                 if(p!=c){
                    
                   set<char> st=mp[p];
                   if(st.find(c)==st.end()){
                             st.insert(c);
                             mp[p]=st;
                             indegree[c-'a']++;
                   }
                       
                   break;//vvimp
               }
                 
            }
        }
        
    }
};

int main(){

Solution so;

int n;
cin>>n;
vector<string> v(n);
string s;
for(int i=0;i<n;i++){
   cin>>s;
   v.push_back(s);
}
/*
v.push_back("wrt");
v.push_back("wrf");
v.push_back("er");
v.push_back("ett");
v.push_back("rftt");*/

cout<<so.alienOrder(v)<<endl;
return 0;
}
