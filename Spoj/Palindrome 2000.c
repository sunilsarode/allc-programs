#include<stdio.h>
#include<string.h>
#include<limits.h>
int max(int data,int data1);

int main()
{

    int n=0;
    scanf("%d",&n);

    char arr[n];
    char rev[n];
    scanf("%s",&arr);
    char *p=arr;
    while(*p!='\0')
    {
        p++;
    }
    p--;
    for(int i=0; i<n; i++)
    {
        rev[i]=*p;
        p--;
    }

    int table[n+1][n+1];

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0||j==0)
            {
                table[i][j]=0;
            }
            else if(arr[i-1]==rev[j-1])
            {
                table[i][j]=table[i-1][j-1]+1;
            }
            else
            {
                table[i][j]=max(table[i-1][j],table[i][j-1]);
            }
        }
    }

    printf("%d\n",n-table[n][n]);
    return 0;

}
int max(int data,int data1)
{
    return data>data1?data:data1;
}
