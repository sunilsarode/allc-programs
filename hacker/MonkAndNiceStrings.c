#include<stdio.h>
#include <string.h>
int main()
{

    int n=0;

    scanf("%d",&n);
    char arr[n][10];
    for(int i=0; i<n; i++)
    {
        scanf("%s",arr[i]);
    }

    printf("%d\n",0);
    for(int j=1; j<n; j++)
    {
        int count =0;
        int i=j-1;
        while(i>=0)
        {
            if(strcmp(arr[i],arr[j])<0)
            {
                count++;
            }
            i=i-1;
        }
        printf("%d\n",count);
    }
    return 0;
}
