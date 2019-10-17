#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 
int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int k=0;
    double j=0.0;
    char str[100];

    scanf("%d",&k);
    scanf("%lf\n",&j);
    scanf("%[^\n]s",str);
    printf("%d\n",i+k);
    printf("%.1f\n",d+j);
    printf("%s ",s);
    printf("%s",str);
    
   return 0; 

}
