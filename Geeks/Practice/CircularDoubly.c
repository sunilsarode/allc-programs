#include<stdio.h>
#include<stdlib.h>

typedef struct node{
 
 int data;
 struct node *left;
 struct node *right;
 
} Node;
int gcount=0;
Node *last=NULL;
Node *createNode(int val){
  Node * new=malloc(sizeof(Node));
  new->right=NULL;
  new->left=NULL;
  new->data=val;
  return new;
}

void insertAtBeg(int val){
  
  if(last==NULL){
    
     last=createNode(val);
     last->right=last;
     last->left=last;
  
  }else{
    
    Node *new=createNode(val);
    new->right=last->right;
    new->left=last->right->left;
    last->right->left=new;
    last->right=new;
  }
  gcount++;
}

void insertAtEnd(int val){
  if(last==NULL){
    
     last=createNode(val);
     last->right=last;
     last->left=last;
  
  }else{

     Node *new=createNode(val);
     new->left=last;
     new->right=last->right;
     last->right->left=new;
     last->right=new;
     last=new;
  }
  gcount++;
}

void insertAtPos(int pos,int val){
 
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

   int c=1;
   Node * new=createNode(val);
   Node *first=last->right;
   Node *temp=first;
   while(c!=pos){
     if(c>1){
        temp=temp->right;
     }
      first=first->right;
      c++;
   }
   new->right=first;
   new->left=temp;
   temp->right=new;
   first->left=new;
   gcount++;   
}

void deleteStart(){
  if(last==NULL){
    printf("List is empy\n"); 
      return;
  }
 
  if(last->right==last &&last->left==last){
     printf("%d\n",last->data);
     free(last);
     last=NULL;
  }else{
  
  Node *first=last->right;
  Node *temp=first;
  first=first->right;
  first->left=temp->left;
  last->right=first;
  printf("%d\n",temp->data);
  temp->right=NULL;
  temp->left=NULL;
  free(temp);
  
  }
  gcount--;

}

void deleteEnd(){

   if(last==NULL){
    printf("List is empty\n"); 
      return;
  }
 
  if(last->right==last &&last->left==last){
     printf("%d\n",last->data);
     free(last);
     last=NULL;
  }else{
     
   Node* temp=last;
   last->left->right=last->right;
   last->right->left=last->left;
   last=last->left;
   printf("%d\n",temp->data);
   temp->right=NULL;
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

   if(!last){
      printf("List is empty\n");
      return;
   }
 
  
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

  int c=0;

  Node *first=last->right;
  Node *temp=first;
  c++;
  while(c!=pos){
     temp=temp->right;
     c++;
  }
 
  temp->left->right=temp->right;
  
  temp->right->left=temp->left;
  printf("%d\n",temp->data);
  temp->right=NULL;
  temp->left=NULL;
  free(temp);
 
  gcount--;
}

void print(){
  
   printf("Global count %d\n",gcount);

   if(last==NULL){
      printf("List is empty\n");
      return;
   }
   
   Node *first=last->right;
 
   do{
       printf("%d ",first->data);
       first=first->right;
   }while(first!=last->right);//very imp again think sunil

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

}
return 0;
}
