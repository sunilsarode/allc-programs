#include<stdio.h>
#include<stdlib.h>

typedef struct node{

   int start;
   int des;
   int w;
   struct node *next;

}Node;

Node *createNode(int start,int des,int w){
 
  Node *new=malloc(sizeof(Node));
  new->start=start;
  new->des=des;
  new->w=w;
  return new;
}
int main(){

  int n,e;
  int start,des,w;
  scanf("%d %d",&n,&e);
  Node * arr[n+1];

  for(int i=0;i<n+1;i++){
     arr[i]=NULL;
  }
  for(int i=0;i<e;i++){
     scanf("%d %d %d",&start,&des,&w);
     if(arr[start]==NULL){
         arr[start]=createNode(start,des,w);
     }else{
         Node *head=arr[start];
         Node *new=createNode(start,des,w);
         new->next=head;
         head=new;
         arr[start]=head;
         
    }
     if(arr[des]==NULL){
         arr[des]=createNode(des,start,w);
     }else{
         Node *head=arr[des];
         Node *new=createNode(des,start,w);
         new->next=head;
         head=new;
         arr[des]=head;
         
    }
  }
  printf("\n");
  for(int i=0;i<n+1;i++){
     Node *head=arr[i];
     while(head!=NULL){
       printf("%d %d %d ",head->start,head->des,head->w);
       head=head->next;
    }
    printf("\n");
  }
return 0;
}
