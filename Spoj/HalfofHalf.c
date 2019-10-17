#include<stdio.h>
int main(){
int t=0;
scanf("%d",&t);
while(t-->0){	
char arr[201];
scanf("%s",arr);
char *ptr=arr;
int n=0;
while(*ptr!='\0'){
	ptr++;
	n++;
}
for(int i=0;i<n/2;i+=2){
	printf("%c",arr[i]);
}
printf("\n");
}
return 0;
}
