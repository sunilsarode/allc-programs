#include<bits/stdc++.h>

using namespace std;

string multiply(string temp){

    string ans="";
    int sum=0;
    int c=0;
    for(int i=temp.size()-1;i>=0;i--){
         sum=(temp[i]-'0')*2+c;
         c=sum/10;
         sum=sum%10;
         ans+=sum+'0';//to make it char
    }
    if(c>0){
      ans+=(c+'0');
    }

    reverse(ans.begin(),ans.end());
    
    return ans;
}


bool cmpsize(string temp,string num){
   if(temp.size()==num.size()){
        return temp<num;
   }

   if(temp.size()<num.size()){
        return true;
   }

   return false;
}

bool isPow2(string num){


   int i=0;
   for(;i<num.size();i++){
	if(num[i]!='0'){
              break;
        }
   }
   if(i==nums.size()){
        return 0;
   }
   num=num.substr(i);

   //cout<<num<<endl;

   string temp="2";

   while(cmpsize(temp,num)){
       temp=multiply(temp);
   }

   if(num==temp){
        return 1;
   }

   return 0;

}
int main(){
  
   
   string num="000";
   cin>>num;
   cout<<isPow2(num)<<endl;;
   return 0;

}
