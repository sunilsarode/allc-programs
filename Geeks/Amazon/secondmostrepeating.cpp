#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    unordered_map <string,int> mp;
	    string s;
	    for(int i=0;i<n;i++){
	        cin>>s;
	        mp[s]++;
	    }
	    vector<pair<int,string>> v;
	    unordered_map<string,int> ::iterator it;
	    for(it=mp.begin();it!=mp.end();++it){
	        v.push_back({it->second,it->first});
	    }
	    sort(v.begin(),v.end());
            /*for(int i=0;i<v.size();i++){
                 cout<<v[i].first<<" "<<v[i].second<<" ";
            }*/
            //cout<<endl;
	    cout<<v[v.size()-2].second<<endl;
	    
	}
	return 0;
}
