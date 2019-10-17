#include<stdio.h>
#include<stdlib.h>

// Complete the alternatingCharacters function below.
int alternatingCharacters(char* s) {

    int len=0;
    char *ptr=s;
    while(*ptr!='\0'){
        ++ptr;
        ++len;
    }
    int count=0;
    char start=s[0];
    for(int i=0;i<len;){
        if(i+1<len){
             if(s[i]==s[i+1]){
                  count+=1;
                  i++; 
             }else if(s[i]!=start){
                   count+=2;
                   i+=2;
             }else{
                  i+=2;
             }
             
            
        }else{
           count+=1;
           i++;
        }
        

    }

     if(count==len){
          count=len-1;
     }
    return count;
}

int main(){

  char arr[100];
  scanf("%s",arr);
  int c=alternatingCharacters(arr);
  printf("%d",c);
return 0;
}


