#include<stdio.h>
#include<stdlib.h>
#define max 10001
int main(){
int t=0;
scanf("%d",&t);

while(t-->0){
char arr[26]={0};
char str[max];
char str1[max];
scanf("%s",str);
scanf("%s",str1);
char *ptr=str;
char *ptr1=str1;
int i=0;
while(*ptr!='\0'){
arr[*ptr-'a']++;
*ptr++;
}
while(*ptr1!='\0'){
arr[*ptr1-'a']--;
*ptr1++;
}
int sum=0;
for(int i=0;i<26;i++){
  //printf("%d ",arr[i]);
 sum+=abs(arr[i]);
}
printf("%d\n",sum);

}


return 0;
}

