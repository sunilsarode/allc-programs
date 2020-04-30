#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x;
	for(int i=0; i < n; i++)
	{
		cin>>x;
		if(x==2)
		{
			cout <<2 << "\n";
		} 
		else if(x%2==0)
		{
			cout << 0 << "\n";
		}
		else{
			cout << 1 << "\n";
		}
	}
}
