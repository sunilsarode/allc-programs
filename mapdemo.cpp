#include<bits/stdc++.h>
#include <string.h>
#include <map>
#include <iterator>
using namespace std;
int main(){
    string str;
    map<string,int> data;	
    for(int i=0;i<3;i++){
		  cin>>str;
          data.insert(pair <string,int> (str,i));
	}
   
    
    map <string,int> :: iterator itr;

    for (itr = data.begin(); itr != data.end(); ++itr)
    {
        cout  <<  '\t' << itr->first 
              <<  '\t' << itr->second << '\n';
    }
    	
	return 0;
}
