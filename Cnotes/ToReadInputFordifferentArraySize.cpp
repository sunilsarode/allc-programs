#include<bits/stdc++.h>

using namespace std;


int main(){

     
    int an;
    cin>>an;
    vector<vector<int>> vec;
    cin.ignore();
    for(int i=0;i<an;i++){
         int c;
         vector<int> v;
         string line;
         getline(cin, line);
         istringstream iss(line);
         while ( iss >> c) {    
             v.push_back(c);
         }
         vec.push_back(v);        
    }

    for(int i=0;i<an;i++){
       vector<int> v=vec[i];
       for(int j=0;j<v.size();j++){
           cout<<v[j]<<" ";
      }
      cout<<endl;
    }
   return 0;
}


