#include<stdio.h>
#include <limits.h>
int main()
{

    int n=0;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    int array[26]= {0};

    int j=0;
    for(; j<n; j++)
    {
        array[arr[j]-'a']++;
    }

    array['h' - 'a']/=2;
    array['a' - 'a']/=2;
    array['e' - 'a']/=2;
    array['r' - 'a']/=2;

    char hack[11] = { 'h', 'a', 'c', 'k', 'e', 'r', 'e', 'a', 'r', 't', 'h' };
    int min=1e6+5;
    int i=0;
    for(; i<11; i++)
    {

        if(min>array[hack[i]-'a'])
        {
            min=array[hack[i]-'a'];
        }
    }
    printf("%d\n",min);
    return 0;
}
