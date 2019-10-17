#include<stdio.h>
int main()
{
    int hashtable[26]= {0};
    int n=0;
    char * ptr;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);

    ptr=arr;
    while(*ptr!='\0')
    {
        hashtable[*ptr-'a']++;
        ptr++;

    }
    if(hashtable['a'-'a']>0&&hashtable['e'-'a']>0&&hashtable['i'-'a']>0&&hashtable['o'-'a']>0&&hashtable['u'-'a']>0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
