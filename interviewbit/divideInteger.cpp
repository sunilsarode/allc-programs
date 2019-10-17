#include<bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor) {
        
        if(dividend==INT_MIN&&divisor==-1){
             return INT_MAX;
        }
        
        int a=abs(dividend);
        int b=abs(divisor);
        cout<<b<<endl;
        int res=0;
    //when both are positive then result of xor is 0(mean false) ,so sign become -1
        int sign=dividend>0 ^ divisor>0?-1:1; 
        
        while((a-b)>=0){
            int x=0;
            
            while(a-(b<<1<<x)>=0){
                x++;
            }
            
            a=a-(b<<x);
            res=res+(1<<x);
        }
        
        return res*sign;
    }

int main(){

int dividend;
int divisor;
cin>>dividend;
cin>>divisor;
cout<<divide(dividend,divisor)<<endl;

return 0;
}
