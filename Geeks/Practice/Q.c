#include<stdio.h>
#include<stdlib.h>

typedef struct node1{
int data;
struct node1 *next;
}Node1;


int gcount=0;
Node1 *front=NULL;

Node1 *createNode1(int val){
 Node1 *new=(Node1 *)malloc(sizeof(Node1));
 new->next=NULL;
 new->data=val;
 return new;
}

void insertAtEnd(int val){


 if(!front){ 
    front=createNode(val); 
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
   Node *temp=front;

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

  if(!front){
      printf("List is empy\n"); 
      return;
  }
  
  Node *temp=front;
 
  front=front->next;
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


