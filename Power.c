#include <stdio.h>
void getSum();
long int arr[10000000+1];
 
int mod=1000000000+9;
int main()
{
   arr[0]=0;
   arr[1]=1;
   getSum();		
   printf("%lu",arr[10000000]);
   return 0;
}

  void getSum() {

		
		for (int i = 2; i <=10000000; i++) {

			if (i % 2 == 0) {

				long long int range = i - 1;
				long long int prevEvenSqr = (i - 2) * (i - 2);
				long long int s1 = prevEvenSqr + range;
				long long int s2 = s1 + range;
				long long int s3 = s2 + range;
				long long int s4 = s3 + range;
				arr[i] = ((s1 + s2 + s3 + s4) + arr[i - 2]) % mod;

			} else {

				long long int range = i - 1;
				long long int prevOddSqr = (i - 2) * (i - 2);
				long long int s1 = prevOddSqr + range;
				long long int s2 = s1 + range;
				long long int s3 = s2 + range;
				long long int s4 = s3 + range;
				arr[i] = ((s1 + s2 + s3 + s4) + arr[i - 2]) % mod;
			}

		}

	}
