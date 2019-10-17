#include<bits/stdc++.h>
using namespace std;

string multi(string a,string b){
   
   //get big string as a
   if(a.size()<b.size()){
       return multi(b,a);
   }

   int m=a.size();//big size
   int n=b.size();
  

   /*
      vector to store the result  
      128
      132
      ----
      256-->first eleemnt vector
     3840-->second
    12800-->so on..
    */
   vector<string> v;
   int zc=-1;
   for(int i=n-1;i>=0;i--){
       int sum=0;
       int c=0;
       zc++;
       string ans="";
       for(int j=m-1;j>=0;j--){
            sum=((a[j]-'0')*(b[i]-'0'))+c;
            c=sum/10;
            sum=sum%10;
            ans+=(sum+'0');
       }
  
       if(c>0){
           ans+=(c+'0');
       }
  
      
       reverse(ans.begin(),ans.end());

       for(int k=0;k<zc;k++){//it add zero or cross , that we add while multyplying 
           ans+=(0+'0');
       }
       
       v.push_back(ans);// put each sum as show above like 256 ,3840, 12800 in vector
    }

   /*
       this is the spacial case when vector will have only one element ,for example 
       15
        6
       --
       90
   */
   if(v.size()==1){
       return v[0];
   }


   /*
        add all the string in vector to get the final result 
   */
   /*cout<<v.size()<<endl;
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<" "<<v[i].size()<<endl;
   }*/
   string f="";
   while(v.size()>=2){
       f="";
       string big=v.back();
       v.pop_back();
       string small=v.back();
       v.pop_back();
       //cout<<v.size()<<" "<<big<<" "<<small<<endl;
       int i=small.size()-1;
       int j=big.size()-1;
       int add=0;
       int carry=0;
       
       while(j>=0&&i>=0){
            add=(big[j]-'0')+(small[i]-'0')+carry;
            carry=add/10;
            add=add%10;
            f+=(add+'0');
            j--;
            i--;
       }
      //cout<<f<<" "<<j<<endl;
      add=0;
      if(carry>0){
        while(j>=0){
            add=((big[j]-'0')+carry);
            carry=add/10;
            add=add%10;
            f+=(add+'0');
            j--;
        }
        
        if(carry>0){
            f+=(carry+'0');
        }
      }else{
         while(j>=0){
            f+=(big[j]);
            j--;
         }
      }

     //cout<<f<<" "<<j<<endl;
     reverse(f.begin(),f.end());
     //cout<<f<<endl;
     v.push_back(f);     
   }
 
  
  return f;
}
string mul(string a,string b){

  
  int i=0;
  
  for(;i<a.size();i++){
       if(a[i]!='0'){
           break;
      }  
  }
 
  //return "0" as we have input a as zero or "" string
  if(i==a.size()){
        
        return "0";
  }
  a=a.substr(i);
  
  i=0;
  
  for(;i<b.size();i++){
       if(b[i]!='0'){
           break;
      }  
  }

  //return "0" as we have input a as zero or "" string
  if(i==b.size()){
        return "0";
  }

  
  b=b.substr(i);

  //if any one string is "" then return zero
  if(b.size()==0||a.size()==0){
       return "0";
  }
  //cout<<a<<b<<endl;
  return multi(a,b);

  
   

}

int main(){

 string a,b;
 cin>>a>>b;

 cout<<mul(a,b)<<endl;

 return 0;
}
