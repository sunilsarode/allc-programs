#include <stdio.h>

int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1 % n2);
    else
       return n1;
}

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);

	while(t--)
	{
	    int a, b;
	    scanf("%d %d", &a, &b);

	    int g = gcd(a, b);
	    int l = (a * b)/g;

	    printf("%d %d\n", g , l);
	}

	return 0;
}
