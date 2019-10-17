#include<stdio.h>
    #include<stdbool.h>
    #include<malloc.h>
    #include<stdlib.h>
    long long gcd(long long a, long long b)
    {
        if (a == 0)
            return b;
        return gcd(b%a, a);
    }
    long long lcm(long long a, long long b)
    {
        return (a*b)/gcd(a, b);
    }
     
    long long solve (long long a, long long b, long long n ) {
      if(a > b){
        a = a ^ b;  
        b = a ^ b;  
        a = a ^ b;
       }
       long long l = lcm(a,b);
       long long num = l * n;
       long long temp = ( (l / a)  + (l / b) - 1 );
      
    	 num = num / temp;
    	 
    	 long long aa = num / a;
    	 long long bb = num / b;
    	 long long cc = num / l;
    	 if(aa + bb - cc == n){
    		 long long num1 = aa * a;
    		 long long num2 = bb * b;
    		 aa = num1 / a;
    	 	bb = num1 / b;
    	 	cc = num1 / l; 
    		 if(aa + bb - cc == n){
    		 	return num1;
    		 }else
    		 return num2;
    	 }else{
    	 	long long num1 = (aa + 1)* a ;
    		 long long num2 = (bb + 1) * b ;
    		 aa = num1 / a;
    	 	 bb = num1 / b;
    	 	 cc = num1 / l; 
    		 if(aa + bb - cc == n){
    		 	return num1;
    		 }else
    		         return num2;
    	 
    	 }
    	
       
    }
     
    int main() {
        int T;
        scanf("%d", &T);
        for(int t_i=0; t_i<T; t_i++)
        {
            long long a;
            scanf("%lld", &a);
            long long b;
            scanf("%lld", &b);
            long long n;
            scanf("%lld", &n);
     
            long long out_ = solve(a, b, n);
            printf("%lld", out_);
            printf("\n");
        }
    }
