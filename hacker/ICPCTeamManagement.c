#include<stdio.h>
int  getlen(char *arr);
int main()
{

    int t=0;
    scanf("%d",&t);
    while(t>0)
    {
        int n=0,k=0;
        scanf("%d%d",&n,&k);
        char arr[100];
        int array[100]= {0};
        int grp=0;
        for(int i=0; i<n; i++)
        {
            scanf("%s",&arr);
            int index=getlen(arr);
            array[index]++;

            if(array[index]==k)
            {
                grp++;
                array[index]=0;
            }
            // printf("%d",getlen(arr));
        }
        if (n / k == grp)
        {
            printf("%s\n","Possible");
        }
        else
        {
            printf("%s\n","Not possible");
        }
        t--;
    }
    return 0;
}
int getlen(char *arr)
{
    int count=0;
    while(*arr!='\0')
    {
        count++;
        arr++;
    }
    return count-1;
}
