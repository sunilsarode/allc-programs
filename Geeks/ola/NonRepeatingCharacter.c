#include<stdio.h>
#include<stdlib.h>

int main(){

int t=0;
scanf("%d",&t);
while(t-->0){

int n;
scanf("%d",&n);
char str[10000];
int arr[26]={0};
scanf("%s",str);
for(int i=0;str[i];i++){
   arr[str[i]-'a']++;
}
int f=0;
for(int i=0;str[i];i++){
   if(arr[str[i]-'a']==1){
      printf("%c\n",str[i]);
      f=1; 
      break;
  }
}
 
if(f==0){
   printf("%d\n",-1);
}
}
return 0;
}
