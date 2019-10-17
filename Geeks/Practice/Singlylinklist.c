#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node *next;
}Node;


int gcount=0;
Node *head=NULL;

Node *createNode(int val){
 Node *new=(Node *)malloc(sizeof(Node));
 new->next=NULL;
 new->data=val;
 return new;
}
void insertAtBeg(int val){

 
  if(!head){
      head=createNode(val); 
   }else{
     Node *new=createNode(val);
     new->next=head;
     head=new;
  }
  gcount++;
}
void insertAtEnd(int val){


 if(!head){ 
    head=createNode(val); 
  }else{
     Node *new=createNode(val);
    // printf("%d",new->data);
     Node *temp=head;
  
     while(temp->next){
        temp=temp->next;
     }
     temp->next=new;
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
     while(temp->next &&c!=pos){
        if(c>1){
          temp1=temp1->next;
       }
        temp=temp->next;
        c++;
     }
     new->next=temp;
     temp1->next=new;
  
  gcount++;
}


void print(){
   printf("Global count %d\n",gcount);
   Node *temp=head;

   if(!temp){
      printf("List is empty");
   }
 

   while(temp){
      printf("%d ",temp->data);
      temp=temp->next;
   }
   printf("\n");
}

void deleteStart(){

  if(!head){
      printf("List is empy\n"); 
      return;
  }
  
  Node *temp=head;
 
  head=head->next;
  printf("%d\n",temp->data);
  temp->next=NULL;
  free(temp);
  gcount--; 
}

void  deleteEnd(){
  
   if(!head){
      printf("List is empy\n"); 
      return;
  }
  
  if(head->next==NULL){
      printf("%d\n",head->data);
      free(head);
      head=NULL;
  }else{

   Node *temp=head;
   while(temp->next->next!=NULL){
        
  	
        temp=temp->next;
   }
   Node *temp1=temp->next;
   printf("%d\n",temp1->data);
   temp->next=NULL;
 
   free(temp1);
 
 } 
  
 gcount--;
}

void deleteAtpos(int pos){
  
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

 

   Node *temp=head;
   Node *temp1=temp;
   c++;
     while(temp->next &&c!=pos){
        if(c>1){
          temp1=temp1->next;
       }
        temp=temp->next;
        c++;
     }

   temp1->next=temp->next;
   printf("%d\n",temp->data);
   temp->next=NULL;
   
   free(temp);
   gcount--;
}


Node* reverse(Node *head)
{
  if(head==NULL){
      return NULL;
  }
  if(head->next==NULL){
  
      return head;
  }
  Node *rest=reverse(head->next);
  head->next->next=head;
  head->next=NULL;
  return rest;
  //printf("%d ",head->data);
}
Node *rev(Node *head){
 
 if(head==NULL){
    return NULL;
 } 
 Node *prev=NULL;
 Node *next=NULL;
 Node *curr=head;
  while(curr!=NULL){
     next=curr->next;  
     curr->next=prev;
     prev=curr;
     curr=next;
     
  }
  
  return prev; 
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
printf("Enter 9 to reverse\n");
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
       deleteAtpos(pos);
       break;   
   case 8:
       exit(0);
       break;
   case 9:
       //head=reverse(head);
       //print(head);
       head=rev(head);
       print(head);
       break;
   
}

}//end of while

return 0;
}


