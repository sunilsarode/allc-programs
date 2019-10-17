#include<stdio.h>
int main()
{
    int table[4][4]= {0};
    for(int i=0; i<=3; i++)
    {
        for(int j=0;j<=3; j++)
        {
            printf("%d",table[i][j]);
        }
        printf("\n");
    }



    long long d=1e18;

    //printf("%lld",d);
    return 0;
}
