#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {

        int n;
        scanf("%d",&n);
        char arr[n];
        scanf("%s",arr);

        char *p;
        p=arr;
        int count=0;
        int count1=0;
        while(*p!='\0')
        {

           // printf("%c",*p);
            if((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z'))
            {
                if(count>0)
                {
                    count1++;
                    count=0;
                }
            }
            else
            {
                count++;
            }
            p++;
        }
         //printf("%d",count);
        if(count>0){
            count1+=1;
        }
        printf("%d\n",count1);

        t--;
    }
    return 0;

}

