// C++ program to print all
// permutations with duplicates allowed
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.

void printarr(int a[]){
 
   for(int i=0;i<4;i++){
      cout<<a[i]<<" ";
   }
   cout<<"\n";

}


void permute(int a[], int l, int r)
{
	// Base case
	if (l == r)
		printarr(a);
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

// Driver Code
int main()
{
	int arr[4]={1,2,3,4};
	int n = 4;
	permute(arr, 0, n-1);
	return 0;
}
