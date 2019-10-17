#include<stdio.h>
#include<string.h>
#include<limits.h>
int max(int data,int data1);
int  getlen(char *arr);
int getlcs(int *curren,int *previous,char *arr,char *arr1,int n1,int n2);
int readline( char * str );
int main()
{

    char arr[50000];
    char arr1[50000];
   // scanf("%s%s",&arr,&arr1);
    int n = readline(arr);
	int m = readline(arr1);


    //printf("%d\n",n);
    //printf("%d\n",m);
    int curren[50000]= {0};
    int previous[50000]= {0};

    int n1=0;
    int n2=0;

    if(n>m)
    {
        n1=n;
        n2=m;
    }
    else
    {
        n1=m;
        n2=n;
    }

    int len=getlcs(curren,previous,arr,arr1,n1,n2);

    printf("%d\n",curren[n2]);
    return 0;

}
int getlcs(int* curren,int* previous,char *arr,char *arr1,int n1,int n2)
{
    for(int i=0; i<=n1; i++)
    {
        for(int j=0; j<=n2; j++)
        {
            if(i==0||j==0)
            {
                curren[j]=0;
            }
            else if(arr[i-1]==arr1[j-1])
            {
                curren[j]=previous[j-1]+1;
            }
            else
            {
                curren[j]=max(curren[j-1],previous[j]);
            }

        }
        previous=curren;

    }

    return previous[n2];
}
int max(int data,int data1)
{
    return data>data1?data:data1;
}
int getlen(char *arr)
{
    int count=0;
    while(*arr!='\0')
    {
        count++;
        arr++;
    }
    return count;
}
int readline( char * str ) {
	int i = 0;
	char ch;
	while ( (ch = getchar() ) != '\n' ) {
		str[i++] = ch;
	}
	str[i] = '\0';
	return i;
}
