#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(vector<ll>& v,ll ans[]){

        double d;
        ll x1=-1;
        ll x2=-1;
        
       /*for(int i=0;i<4;i++)
           cout<<v[i]<<" ";
        cout<<"\n";*/  
        
        for(int i=2;i>=0;i--){
        
                
                d = v[i] * v[i] - 4 * 1 * v[3];
                //cout<<"I am d "<<d<<"\n";
		if (d >= 0)
		{

		    x1 = (-(-v[2]) + sqrt(d)) / (2);
		    x2 = (-(-v[2]) - sqrt(d)) / (2);
		    
		       int one;
			int two;
			if(i==2){
			   one=0;
			   two=1;
			}else if(i==1){
			   one=0;
			   two=2;
			}else if(i==0){
			   one=1;
			   two=2;
			}
			//cout<<"x1 "<<x1<<" "<<"x2 "<<x2<<" "<<i<<"\n";
			//cout<<v[one]<<" "<<v[two]<<"\n";
		       if(x1>0 && x2>0){
		    
			    if (x1 - x2 == v[one] && x2 > 0 && x1 / x2 == v[two])
			    {
				//cout << x1 << " " << x2 << "\n";
				ans[0]=x1;
				ans[1]=x2;
				break;
			    }
			    else if (x1 - x2 == v[two] && x2 > 0 && x1 / x2 == v[one])
			    {
				//cout << x1 << " " << x2 << "\n";
				ans[0]=x1;
				ans[1]=x2;
				break;
			    }
			    else if (x2 - x1 == v[one] && x1 > 0 && x2 / x1 == v[two])
			    {
				//cout << x2 << " " << x1 << "\n";
				ans[0]=x2;
				ans[1]=x1;
				break;
			    }
			    else if (x2 - x1 == v[two] && x1 > 0 && x2 / x1 == v[one])
			    {
				//cout << x2 << " " << x1 << "\n";
				ans[0]=x2;
				ans[1]=x1;
				break;
			    }
		      }else{
		         ans[0]=-1;
		         ans[1]=-1;
		      } 


		}
        }

}




int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {


        vector<ll> arr(4,0);
        for (int i = 0; i < 4; i++)
        {
            cin>>arr[i];
        }
       
        sort(arr.begin(), arr.end());
        ll ans[2]={0};
        solve(arr,ans);
        if(ans[0]>0 && ans[1]>0){
           cout<<ans[0]<<" "<<ans[1]<<"\n";            
        }else{
	        ll temp=arr[3];
		arr[3]=arr[2];
		arr[2]=temp;
		ans[2]={0};
		solve(arr,ans);
	     if(ans[0]>0 && ans[1]>0){	
		cout<<ans[0]<<" "<<ans[1]<<"\n";
	     }else{
	       cout<<-1<<" "<<-1<<"\n";  
	     }	        
        }

        
        
    }
    return 0;
}
