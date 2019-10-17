#include<stdio.h> 
#include<string.h>
int main(){
char str[1000]={0};
char arr[256]={0};
int t;
char index;
scanf("%d\n",&t);
while(t--){


gets(str);

int start=0,end=0;
while(*(str+end)){

  index=*(str+end);
  if(arr[index]==0){
   arr[index]++;
   *(str+start)=*(str+end);
   start++;  
 }
 end++;
}
str[start]='\0';
printf("%s\n",str);
memset(str, 0, 1005);
memset(arr,0,256);
}
return 0;
}
