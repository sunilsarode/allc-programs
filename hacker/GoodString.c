#include<stdio.h>
int main()
{

    char arr[100000]= {0};
    scanf("%s",arr);

    char *ptr;
    ptr=arr;
    int n=0;
    while(*ptr!='\0')
    {
        ptr++;
        n++;
    }
    //printf("%d\n",n);
    int array[26]={0};

    for(int i=0; i<n; i++)
    {
        array[arr[i]-'a']++;
    }
    int count=0;
    for(int i=0; i<26; i++)
    {
      //  printf("%d ",array[i]);
        if(array[i]>0)
        {
            count=count+(array[i]-1);
        }
    }
   // printf("\n");
    printf("%d",count);
    return 0;
}
