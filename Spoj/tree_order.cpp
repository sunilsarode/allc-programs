#include<bits/stdc++.h>
bool var=true;
void posOrder(int ino[],int pre[],int s,int e,int pos[]);
int search(int ino[],int s,int e,int data);
int preo=0;
int in=0;
int main(){

int n;
scanf("%d",&n);
int pre[n];
int pos[n];
int ino[n];

for(int i=0;i<n;i++){
    scanf("%d",&pre[i]); 
}
for(int i=0;i<n;i++){
    scanf("%d",&pos[i]); 
}
for(int i=0;i<n;i++){
    scanf("%d",&ino[i]); 
}

posOrder(ino,pre,0,n-1,pos);

  if(var){
      printf("yes\n");
   }else{
      printf("no\n");
 }
//printf("%d",preo);
return 0;
}

void posOrder(int ino[],int pre[],int s,int e,int pos[]){
 
   if(s>e){
      return;
   }
   int indexIn=search(ino,s,e,pre[preo++]);
   //left
   posOrder(ino,pre,s,indexIn-1,pos);
   //right
   posOrder(ino,pre,indexIn+1,e,pos);
 
   //printf("%d ",ino[indexIn]);
   if(!(pos[in++]==ino[indexIn])){
      var=false;
      return; 
   }
 
}
int search(int ino[],int s,int e,int data){
  int i=0;
  for(i=s;i<e;i++){
     if(ino[i]==data){
        return i;
     }
  }
  return i;
}
