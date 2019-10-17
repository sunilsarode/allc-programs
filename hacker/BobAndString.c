#include<stdio.h>
#include<stdlib.h>
#define max 100001
int main(){
int t=0;
scanf("%d",&t);

while(t-->0){
int sarr[26]={0};
int tarr[26]={0};
char str[max];
char str1[max];
scanf("%s",str);
scanf("%s",str1);
char *ptr=str;
char *ptr1=str1;
int ls=0;
int lt=0;
while(*ptr!='\0'){
sarr[*ptr-'a']++;
++ptr;
ls++;
}
while(*ptr1!='\0'){
tarr[*ptr1-'a']++;
++ptr1;
lt++;
}
for(int i=0;i<26;i++){
 printf("%d ",tarr[i]);
 
}
printf("\n");
for(int i=0;i<26;i++){
 
 printf("%d ",sarr[i]);
}
printf("\n");
int flag=1;
for(int i=0;i<26;i++){
 if(tarr[i]!=sarr[i]){ 
   flag=0;
   break; 
 }
}
//printf("%d",ls);
//printf("%d",lt);
if(flag){
  printf("%d\n",0);
}else{
 
 int count=0;
//printf("%d\n",str1[0]-'a');
//printf("%d\n",sarr[str1[0]-'a']);
  for(int i=0;i<lt;i++){
 	if(sarr[str1[i]-'a']==0){ 
          count++;
 	}else if(tarr[str1[i]-'a']>sarr[str1[i]-'a']){
          count=count+(tarr[i]-sarr[i]);
 	}
    }
 printf("%d\n",count);

// printf("%d\n",str[0]-'a');

 for(int i=0;i<ls;i++){
 
 	if(tarr[str[i]-'a']==0){ 
          count++;
 	}else if(sarr[str[i]-'a']>tarr[str[i]-'a']){
          count=count+(sarr[i]-tarr[i]);
        }
   }

  printf("%d\n",count);
}//else end

}//while end


return 0;
}

