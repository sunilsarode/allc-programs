#include<stdio.h>
#include<string.h>
#include<limits.h>

int main()
{
    int t=0;
    scanf("%d",&t);
    while(t>0)
    {
        char arr[1000]= {0};

        int array[256]= {0};
        scanf("%s",&arr);
        int n=strlen(arr);
        char rev[n];
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

        for(int i=0; i<strlen(arr); i++)
        {
            array[arr[i]-'a']++;
        }
        int odd=0;
        int count=0;
        for(int i=0; i<26; i++)
        {
            if(!(array[i]%2==0))
            {
                odd++;
            }
            count+=(array[i]%2);

        }
        if(odd<=1)
        {
            printf("%d\n",0);
        }
        else
        {
            count--;
            printf("%d\n",count);
        }


        t--;
    }
    return 0;

}
