#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    char *ptr;
    ptr=str;
    int counter=0;
    while(*ptr!='\0')
    {
        ptr++;
        counter++;
    }
    int i=1;
    int j=0;
    --ptr;

    while(j<(counter/2))
    {

        if(*ptr-str[j]==0)
        {
            --ptr;
            j++;

        }
        else
        {
            i=0;
            break;
        }
    }

    if(i)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    printf("\n");
    return 0;
}
