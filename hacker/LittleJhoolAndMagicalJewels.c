#include<stdio.h>
#include <limits.h>
int main()
{

    int t=0;
    scanf("%d",&t);
    while(t>0)
    {
        char arr[100];
        int hash[26]= {0};
        scanf("%s",arr);
        char *ptr;
        ptr=arr;
        char array[4]= {'r','u','b','y'};

        while(*ptr!='\0')
        {
            char c=*ptr;
            hash[*ptr-'a']++;
            ptr++;

        }

        int min=INT_MAX;
        for(int i=0; i<4; i++)
        {

            if(hash[array[i]-'a']<min)
            {
                min=hash[array[i]-'a'];
            }
            // printf("%d ",hash[i]);
        }
        printf("%d\n",min);
        t--;
    }
    return 0;
}
