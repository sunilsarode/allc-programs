#include<stdio.h>
#include<stdlib.h>

int main(){
int t=0;
scanf("%d",&t);
while(t-->0){

char str1[100];
char str2[100];
scanf("%s",str1);
scanf("%s",str2);

int arr[26]={0};

for(int i=0;str2[i];i++){
   arr[str2[i]-'a']++;
}
int j=0,i=0;
for(i=0;str1[i];i++){
  if(arr[str1[i]-'a']==0){
       str1[j]=str1[i];
       j++;
  }

}
str1[j]='\0';
printf("%s\n",str1);


}
return 0;
}
