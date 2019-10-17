#include<stdlib.h>
#include<stdio.h>

int main(){
int t=0;
scanf("%d",&t);
while(t-->0){

char str[100000];
char str1[100000];
scanf("%s",str);
scanf("%s",str1);
int arr[26]={0};
int f=0;

/*for(int i=0;str[i];i++){
     printf("%c ",str[i]);
}*/
for(int i=0;str1[i];i++){
     arr[str1[i]-97]++;
}
/*for(int i=0;i<26;i++){
   printf("%d",arr[i]);
}*/

for(int i=0;str[i];i++){
    if(arr[str[i]-'a']!=0){
         f=1;
         printf("%c\n",str[i]);
	 break;
   }
}
if(f==0){
   printf("No character present\n");
}
}
return 0;
}
