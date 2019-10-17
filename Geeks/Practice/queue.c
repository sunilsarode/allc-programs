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


int main(){


while(1){

printf("Enter 1 to insert at queue\n");
printf("Enter 2 to insert at remove\n");
printf("Enter 3 to print \n");


printf("Enter 4 to exit\n");



int choice=0;
scanf("%d",&choice);
int val,pos;
switch(choice){
  
   case 1:
        
        scanf("%d",&val);
        insertAtEnd(val);
        break;
   
   case 2:
       
      deleteStart();
       break;
   
   case 3:
       print();
       break;
  
   case 4:
       exit(0);
       break;
   
}

}//end of while

return 0;
}


