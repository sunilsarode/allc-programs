#include<bits/stdc++.h>
using namespace std;

int main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);  	
	
    int t;
    cin>>t;
     
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        
        int c=x;

        if(c%3==0){
           
            int mqr=c/3;
            if(n<mqr){
               cout<<"NO"<<"\n";
            }else{
               cout<<"YES"<<"\n";
               if(n==mqr){
                 
                  cout<<n<<" "<<0<<" "<<0<<"\n";
               }else{
                   int rq=n-mqr;
                   cout<<mqr<<" "<<0<<" "<<rq<<"\n";
               } 
            }
        }else if(c%3==1){
            int mqr=c/3;
            if(n<=mqr){
                cout<<"NO"<<"\n";
            }else {
                int rq=n-mqr;
                if(rq>=3){
                   
                    cout<<"YES"<<"\n";
                    if(rq==3){
                       cout<<mqr+1<<" "<<2<<" "<<0;
                    }else{
                       int ua=rq-3; 
                       cout<<mqr+1<<" "<<2<<" "<<ua; 
                    }

                }else{
                    cout<<"NO"<<"\n";
                }
            }

        }else if(c%3==2){
            int mqr=c/3;
            if(n<=mqr){
                cout<<"NO"<<"\n";
            }else{
                int rq=n-mqr;
                if(rq>=2){
                    cout<<"YES"<<"\n";
                    if(rq==2){
                       cout<<mqr+1<<" "<<1<<" "<<0;
                    }else{
                       int ua=rq-2; 
                       cout<<mqr+1<<" "<<1<<" "<<ua; 
                    }

                }else{
                    cout<<"NO"<<"\n";
                }
            }

        }

    }
    
   return 0;

}
