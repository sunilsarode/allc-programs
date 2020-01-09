#include<bits/stdc++.h>

using namespace std;

class TrieNode{
  
public:
   TrieNode* arr[26];
   int f;
   
   TrieNode(){
       for(int i=0;i<26;i++){
           arr[i]=NULL;
       }
       f=0;   
   }
  
};

class Trie{

public :
 
  TrieNode* root=NULL;
  Trie(){
  
      root=new TrieNode();
  } 
 
  void insert(string s){
      TrieNode* t=root;
      for(int i=0;i<s.size();i++){
           if(t->arr[s[i]-'a']==NULL){
                t->arr[s[i]-'a']=new TrieNode();
               // t->arr[s[i]-'a']->f++;     
           }
           t->arr[s[i]-'a']->f++; 
           t=t->arr[s[i]-'a'];
      }
  }

  string findPrefix(string s){
    TrieNode* t=root;
     for(int i=0;i<s.size();i++){
            if(t!=NULL){
             //  cout<<t->arr[s[i]-'a']->f<<endl;
               if(t->arr[s[i]-'a']->f==1){
                   return s.substr(0,i+1);
               }
               t=t->arr[s[i]-'a'];
            }else{
                break;
            }
     }

    return s;
  }

};


int main(){

Trie trie;

int n;
cin>>n;

vector<string> v(n);

for(int i=0;i<n;i++){
   cin>>v[i];
}

for(int i=0;i<n;i++){

  trie.insert(v[i]);
}

for(int i=0;i<n;i++){
   cout<<trie.findPrefix(v[i])<<endl;
}
return 0;
}
