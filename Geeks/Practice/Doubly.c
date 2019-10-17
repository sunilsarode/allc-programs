#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node *left;
  struct node *right;

}Node;

int gcount=0;
Node *head=NULL;
Node * createNode(int val){
 
  Node * new=(Node *)malloc(sizeof(Node));
  new->data=val;
  new->left=NULL;
  new->right=NULL;
  return new;
}

void insertAtBeg(int val){

 if(head==NULL){
  
    head=createNode(val);
 }else{
  
    Node *new=createNode(val);
    Node * temp=head;
    temp->left=new;
    new->right=temp;
    head=new;
 }
  gcount++;
}

void insertAtEnd(int val){

   if(head==NULL){
  
    head=createNode(val);
 }else{
  
    Node *new=createNode(val);
    Node * temp=head;

    while(temp->right!=NULL){

       temp=temp->right;
   }
    temp->right=new;
    new->left=temp;
   
 }
 gcount++;
}

void insertAtPos(int pos,int val){

  int c=0;

  if(pos<=0){
     printf("postion must grater than zero\n");
     return;
  }
  if(pos>gcount+1){
     printf("No such position\n");
     return;
  }
  
  if(pos==1){
     insertAtBeg(val);
     return;
  }
  if(pos==gcount+1){
     
     insertAtEnd(val);
     return;
  }
 
  if(!head){
      printf("List is empty\n");
      return;
   }

   Node *new=createNode(val);

   Node *temp=head;

   Node *temp1=temp;

   c++;
   while(temp->right &&c!=pos){
         if(c>1){
           temp1=temp1->right;
       }
       temp=temp->right;
       c++;
   }
   new->right=temp;
   temp->left=new;
   temp1->right=new;
   new->left=temp1;
   
  gcount++;
}
void deleteStart(){

 if(head==NULL){
    printf("List is empy\n"); 
      return;
 }

 if(head->right==NULL &&head->left==NULL){
       printf("%d\n",head->data);
       head=NULL;     
 }else{
  
 Node *temp=head;

 head=head->right;
 printf("%d\n",temp->data);
 head->left=NULL;
 temp->right=NULL;
 
 free(temp);
 gcount--;

 }
}
void deleteEnd(){

    if(head==NULL){
    printf("List is empy\n"); 
      return;
    }

     if(head->right==NULL &&head->left==NULL){
        printf("%d\n",head->data);
        head=NULL;     
    }else{
       Node * temp=head;
  
      while(temp->right!=NULL){
          temp=temp->right;
      }
      printf("%d\n",temp->data);
      temp->left->right=NULL;
      temp->left=NULL; 
      free(temp);     
   }
   gcount--;
}
void deleteAtPos(int pos){

   if(pos<=0){
     printf("postion must grater than zero\n");
     return;
  }

   if(!head){
      printf("List is empty\n");
      return;
   }
 
  int c=0;
  if(pos>gcount){
     printf("No such position\n");
     return;
  }
  
  if(pos==1){
     deleteStart();
     return;
  }
  if(pos==gcount){
     
     deleteEnd();
     return;
  }
  c++;
  Node *temp=head;
  while(temp->right!=NULL&&c!=pos){
     temp=temp->right;
     c++;
  }
  temp->right->left=temp->left;
  temp->left->right=temp->right;
  printf("%d\n",temp->data);
  temp->left=NULL;
  temp->right=NULL;

  free(temp);
}
void print(){

  if(head==NULL){
     printf("List is empty");
  }
  Node *temp=head;
  
  while(temp){
    printf("%d ",temp->data);
    temp=temp->right;
  }
 
 printf("\n");
}

int main(){


while(1){

printf("Enter 1 to insert at begining\n");
printf("Enter 2 to insert at end\n");
printf("Enter 3 to print \n");
printf("Enter 4 to insert at given position\n");
printf("Enter 5 to delete from start\n");
printf("Enter 6 to delete from end\n");
printf("Enter 7 to delete from position\n");

printf("Enter 8 to exit\n");



int choice=0;
scanf("%d",&choice);
int val,pos;
switch(choice){
  
   case 1:
        
        scanf("%d",&val);
        insertAtBeg(val);
       break;
   
   case 2:
       
        scanf("%d",&val);
        insertAtEnd(val);
       break;
   
   case 3:
       print();
       break;

   case 4:
       scanf("%d %d",&val,&pos);
       insertAtPos(pos,val);
       break;

   case 5:
      
       deleteStart();
       break;
 
   case 6:
      
       deleteEnd();
       break;

  
   case 7:
       scanf("%d",&pos);
       deleteAtPos(pos);
       break;   
   case 8:
       exit(0);
       break;
   
  }
 }//end while

return 0;
}
