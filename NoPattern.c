/*
12345
1234
123
12
1
*/
#include<stdio.h>
void main()
{
int i,j,k,l,n;
printf("Enter the number of lines to be printed: ");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=1;j<=i;j++)
printf("%d",j);

printf("\n");
}
}
