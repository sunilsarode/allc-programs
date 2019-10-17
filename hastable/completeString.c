#include<stdio.h>
#include<string.h>
int main()
{

int arr[26];

int n=0;
scanf("%d",&n);
while(n--)
{
for(int i=0;i<26;i++){ arr[i]=0; }
char str[100];
scanf("%s",str);
for(int i=0;i<strlen(str);i++){

arr[str[i]-'a']++;
}
//for(int i=0;i<26;i++){
	//printf("%d ",arr[i]);
//}
int var=1;
for(int i=0;i<26;i++){
if(arr[i]==0){
var=0;
break;
}
}
if(var){
printf("YES\n");
}else{
printf("NO\n");
}

}

return 0;
}

