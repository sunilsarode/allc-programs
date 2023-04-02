#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int o=0;
	int z=0;
	for(int i=0;i<n;i++){
	  if(s[i]=='0'){
	     z++;
	  }else{
	     o++;
	  }
	}
	cout<<o<<" "<<z<<"\n";
	if(o==0&&z!=0){
	   cout<<s<<"\n";
	   cout<<s<<"\n";
	}else if(z==0 && o!=0){
	   cout<<s<<"\n";
	   cout<<s<<"\n";	
	}else if(o==z){
	   if(s=="10" ||s=="01"){
	      cout<<"10"<<"\n";
	      cout<<"01"<<"\n";
	   }else{
	   string fi="";
	   string se="";
	   for(int i=0;i<o;i++){
	      fi+='1';
	   }
	   for(int i=0;i<o;i++){
	      fi+='0';
	   }
	   for(int i=0;i<n;i++){
	      if(i%2==0){
	         se+='1';
	      }else{
	         se+='0';
	      }
	   }
	   cout<<fi<<"\n";
	   cout<<se<<"\n";
	   
	   }
	   
	}else if(o>z){
	   int diff=o-z;
	   int samel=n-diff;
	   string fi="";
	   string se="";
	   for(int i=0;i<z;i++){
	      fi+='0';
	   }
	   for(int i=0;i<z;i++){
	      fi+='1';
	   }

	   for(int i=0;i<diff;i++){
	         fi+='1';
	   }
	   for(int i=0;i<samel;i++){
	      if(i%2==0){
	         se+='1';
	      }else{
	         se+='0';
	      }
	   }
	   int l=1;
	   for(int i=0;i<diff;i++){
	      if(l==1){
	         se+='1';
	         l=0;
	      }else{
	         se.insert(0,"1");
	         l=1;
	      }
	   }
	   
	   cout<<fi<<"\n";
	   cout<<se<<"\n";
	
	}else{
	   //cout<<"I am here"<<"\n";
	   int diff=z-o;
	   int samel=n-diff;
	   string fi="";
	   string se="";
	   for(int i=0;i<o;i++){
	      fi+='1';
	   }
	   for(int i=0;i<o;i++){
	      fi+='0';
	   }
	   for(int i=0;i<diff;i++){
	         fi+='0';
	   }
	   for(int i=0;i<samel;i++){
	      if(i%2==0){
	         se+='0';
	      }else{
	         se+='1';
	      }
	   }
	   int l=1;
	   for(int i=0;i<diff;i++){
	      if(l==1){
	         se+='0';
	         l=0;
	      }else{
	         se.insert(0,"0");
	         l=1;
	      }
	   }
	   
	   cout<<fi<<"\n";
	   cout<<se<<"\n";
	}
    }
    return 0;
}
