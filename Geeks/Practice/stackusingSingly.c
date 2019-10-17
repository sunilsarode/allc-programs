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


void print(){
   printf("Global count %d\n",gcount);
   Node *temp=head;

   if(!temp){
      printf("stack is empty");
   }
 

   while(temp){
      printf("%d ",temp->data);
      temp=temp->next;
   }
   printf("\n");
}

void deleteStart(){

  if(!head){
      printf("stack is empty\n"); 
      return;
  }
  
  Node *temp=head;
 
  head=head->next;
  printf("%d\n",temp->data);
  temp->next=NULL;
  free(temp);
  gcount--; 
}



void printTop(){

 if(head==NULL){
    printf("Stack is empty\n");
    return;
 }

 printf("%d\n",head->data);

}



int main(){


while(1){

printf("Enter 1 to push in\n");
printf("Enter 2 to pop\n");
printf("Enter 3 to print  \n");
printf("Enter 4 to print top\n");
printf("Enter 5 to exit\n");



int choice=0;
scanf("%d",&choice);
int val,pos;
switch(choice){
  
   
   case 1:
       
        scanf("%d",&val);
        insertAtBeg(val);
       break;

   case 2:
      
       deleteStart();
       break;
   
   case 3:
       print();
       break;


   case 4: 
      
      printTop(); 
    
      break;


   case 8:
       exit(0);
       break;
   
}

}//end of while

return 0;
}


