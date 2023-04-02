#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int f=1;
void fun (int i,int j,vector<ll>& arr,map<ll,vector<int>>& mp,int oi,int  oj,vector<ll>& carr){

   
   //cout<<arr[i]<<" "<<arr[j]<<" "<<i<<" "<<j<<"\n";
   if(i==oj && j==oi){
       //cout<<i<<" "<<j<<" "<<oj<<" "<<oi<<"\n";
       f=0;
       return;
   }
   
   if(!(arr[i]<arr[j] && i<j) && (arr[i]&arr[j])!=0){
       //cout<<"I am here"<<"\n";
       ll temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
   }else{
       
       oi=i; 
       i=j; 
       vector<int> ina= mp[arr[j]];
       //cout<<ina[0]<<" "<<arr[j]<<"\n";
       for(int k=0;k<ina.size();k++){
            oj=j;
            
            fun(i,ina[k],arr,mp,oi,oj,carr);
            //cout<<arr[oi]<<" "<<arr[oj]<<" "<<oi<<" "<<oj<<"\n";
	       if(!(arr[oi]<arr[oj] && oi<oj) && (arr[oi]&arr[oj])!=0){
		       ll temp=arr[oi];
		       arr[oi]=arr[oj];
		       arr[oj]=temp;  
	       }
       }  	 

   }
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  	
  int t;
  cin>>t;
  while(t--){
    f=1;
    int n;
    cin>>n;
    vector<ll> arr(n);
    vector<ll> carr(n);
    map<ll,vector<int>> mp;
    for(int i=0;i<n;i++){
       cin>>arr[i];
       carr[i]=arr[i];    
 
    }
    
    sort(carr.begin(),carr.end());

    for(int i=0;i<n;i++){
	       
	       auto itr= mp.find(carr[i]);
	       if(itr!=mp.end()){
		    vector<int> in=itr->second;
		    in.push_back(i);
		    mp[carr[i]]=in;	
		}else{
		      
		   vector<int> in;
		   in.push_back(i);
		   mp[carr[i]]=in;
		}	        
    }
    
    
    for(int i=0;i<n;i++){
        vector<int> ina= mp[arr[i]]; 	
         
        for(int k=0;k<ina.size();k++){
            	//cout<<ina[k]<<"\n";
            	
            if(i!=ina[k]){
            fun(i,ina[k],arr,mp,-1,-1,carr);
            
            }	
        }      	
    }
    
    if(f==0){
       cout<<"NO"<<"\n";
    }else{
       cout<<"YES"<<"\n";
    }
    
   
  }
       
  return 0;
}

