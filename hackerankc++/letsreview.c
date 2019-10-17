
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

   
    char str[10000];
    int t;
    scanf("%d",&t);

    while(t-->0){

       scanf("%s",str);
       int len =strlen(str);

       for (int j=0; j<len; j++)
        {
           if(2*j<len)
            printf("%c",str[2*j]);
        }
        printf(" ");
        for (int k=0; k<len; k++)
        {
           if((2*k+1)<len)
            printf("%c",str[(2*k)+1]);

        }
        printf("\n");

   }
}
