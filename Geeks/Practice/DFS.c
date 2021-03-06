#include<stdio.h>
#include<stdlib.h>



typedef struct node1{
int data;
struct node1 *next;
}Node1;

int vis[1000]={0};

int gcount=0;
Node1 *top=NULL;

Node1 *createNode1(int val){
 Node1 *new=(Node1 *)malloc(sizeof(Node1));
 new->next=NULL;
 new->data=val;
 return new;
}

void insertAtBeg(int val){

 
  if(!top){
      top=createNode1(val); 
   }else{
     Node1 *new=createNode1(val);
     new->next=top;
     top=new;
  }
  gcount++;
}
int deleteStart(){


  Node1 *temp=top;
 
  top=top->next;
  //printf("%d\n",temp->data);
  int val=temp->data;
  temp->next=NULL;
  free(temp);
  gcount--; 
  return val;
}



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

 
  for(int i=0;i<n+1;i++){
     Node *head=arr[i];
     while(head!=NULL){
       printf("%d %d %d ",head->start,head->des,head->w);
       head=head->next;
    }
    printf("\n");
  }

  int startNode=0;
  printf("Enter the start node\n");
  scanf("%d",&startNode);
  if(startNode>n){
     printf("Enter valid node");
  }else{
 
     Node *s=arr[startNode];
     insertAtBeg(s->start);
     vis[s->start]=1;
     while(top!=NULL){
         int val=deleteStart();    
         printf("%d ",val);
         Node *t=arr[val]; 
         while(t!=NULL){
             if(vis[t->des]==0){
                    insertAtBeg(t->des);
                    vis[t->des]=1;
            }
            t=t->next;
         }
         
     }//end of while     
        
  }
return 0;
}
