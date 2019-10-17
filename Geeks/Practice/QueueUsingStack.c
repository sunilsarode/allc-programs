#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node *next;
}Node;


int gcount=0;


Node *createNode(int val){
 Node *new=(Node *)malloc(sizeof(Node));
 new->next=NULL;
 new->data=val;
 return new;
}
Node *insertAtBeg(int val,Node *head){

 
  if(!head){
      head=createNode(val); 
   }else{
     Node *new=createNode(val);
     new->next=head;
     head=new;
  }
  gcount++;
  return head;
}


Node * deleteStart(Node **head,Node *head1){

  Node *head2=*head; 
  while(head2!=NULL){

    Node *temp=head2;
    head1=insertAtBeg(temp->data,head1); 
    head2=head2->next;
    temp->next=NULL;
    free(temp);
  }
  
  return head1;
}



Node *insertInQ(int val,Node * head){
  
    head=insertAtBeg(val,head);
    return head;
}

int main(){
Node *head=NULL;
Node *head1=NULL;

while(1){

printf("Enter 1 to insert in\n");
printf("Enter 2 to remove\n");
printf("Enter 3 to exit\n");



int choice=0;
scanf("%d",&choice);
int val,pos;
switch(choice){
  
   
   case 1:
       
        scanf("%d",&val);
        head=insertInQ(val,head);
        
       break;

   case 2:
       
       if(head==NULL &&head1==NULL){
           printf("Queue is empty\n");       
       }else{
      
        if(head1==NULL){
            head1=deleteStart(&head,head1);
            head=NULL;
        }
        
        printf("%d\n",head1->data);
        head1=head1->next; 
        gcount--; 
      }
       break;
   

   case 3:
       exit(0);
       break;
   
}

}//end of while

return 0;
}


