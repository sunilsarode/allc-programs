#include<stdio.h>
int main()
{

    char arr[10001]= {0};
    char *p,*p1,*ptr,*ptr1;
    scanf("%s",&arr);

    p=arr;
    p1=arr;
    ptr=arr;
    ptr1=arr;
    int counter=0;

    while(*ptr!='\0')
    {
        ptr++;
        if((*p++)%2==0)
        {
            counter++;
        }
    }
    while(*ptr1!='\0')
    {
        printf("%d ",counter);
        ptr1++;
        if((*p1++)%2==0)
        {
            counter--;
        }
    }

    return 0;
}
