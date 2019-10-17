#include<stdio.h>

int main(){
int arr[26]={0};
char str[100001]; 
scanf("%s",str);
char *ptr=str;
int n=0;
while(*ptr!='\0'){
arr[*ptr-'a']++;
++ptr;
n++;
}

for(int i=0;i<n;i++){
 if(arr[str[i]-'a']>0){
     printf("%c",str[i]);
    arr[str[i]-'a']=0;
 }
}
return 0;
}
