#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

	vector<ll> ans(2,0l);

void printArr(vector<ll>& v){

    //S D A M 
      double d;
      double x1=-1;
      double x2=-1;

      
      d = v[2] * v[2] - 4 * 1 * v[3];
      
      if (d >= 0){
            x1 = (-(-v[2]) + sqrt(d)) /2.0;
            x2 = (-(-v[2]) - sqrt(d)) /2.0;
            //cout<<x1<<" "<<x2<<"\n"; 
            if(x1>0 && x2>0 && x1<=10000 && x2<=10000){
            	//cout << x1 << " " << x2 <<" "<<d<<"\n";
		    if ((ll)(x1 - x2) == v[0] && x2 > 0 && floor(x1 / x2) == v[1])
		    {
			
			ans[0]=x1;
			ans[1]=x2;
			
		    }else if ((ll)(x2 - x1) == v[0] && x1 > 0 && floor(x2 / x1) == v[1])
		    {
			
			ans[0]=x2;
			ans[1]=x1;
			
		    }
		    
		    
		    
	    }
	   	    
      }
}


void permute(vector<ll>& a, int l, int r)
{
    // Base case
    if (l == r)
        printArr(a);
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
 
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            permute(a, l+1, r);
 
            //backtrack
            swap(a[l], a[i]);
        }
    }
}
 


int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {

        ans[0]=-1;
        ans[1]=-1;
        vector<ll> arr(4,0);
        for (int i = 0; i < 4; i++)
        {
            cin>>arr[i];
        }
        permute(arr, 0, 3);
                
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}


/*

1
1000000000 999999999 1000000001 1000000000

----------------------------------------------------
1
100 101 99 100
100 1

---------------------------------
1
-5 0 1 6
-1 -1
---------------------------
1
9 8 7 8
8 1
-------------------
1
9 8 -7 0
1 8

---------------
1
25 10 0 1   
5 5
---------------
1
25 0 1 -10
-1 -1

-------------
1
1 2 0 1
1 1

-------------------------------
1
1
-1000000000 999999999 1000000001 1000000000

----------------------------------------------------
1
20000 100000000 0 1
*/
