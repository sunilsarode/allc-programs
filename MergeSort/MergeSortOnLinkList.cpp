#include<stdio.h>
#include<stdlib.h>

struct Node{
   int data;
   Node* next;
};

void split(Node* head,Node** front,Node** back){

  Node* fast;
  Node* slow;
  slow=head;
  fast=head->next;
  
  while(fast){
     fast=fast->next;
     if(fast!=NULL){
          slow=slow->next;
          fast=fast->next;
     }
  }

  *front=head;
  *back=slow->next;
   slow->next=NULL;
}

Node* msort(Node* head1,Node* head2){
 
   if(head1==NULL){
       return head2;
   }
   if(head2==NULL){
      return head1;
   }
   if(head1->data<=head2->data){
        head1->next=msort(head1->next,head2);
        return head1;
   }
   if(head2->data<head1->data){
       head2->next=msort(head2->next,head1);
       return head2;
   }
   
}
void mergesort(Node** headref){
 
  Node* head=*headref;
  Node* a;
  Node* b;
  //no or one node return
  if(head==NULL || head->next==NULL){
       return;
  }

  split(head,&a,&b);

   mergesort(&a);
   mergesort(&b);
  
   *headref=msort(a,b); 

}


void printList(Node** head){
   
  Node* headref=*head;
  while(headref){
     printf("%d ",headref->data);
     headref=headref->next;
  }
  printf("\n");
   
}

void addList(Node** head,int val){
   struct Node* nNode=(struct Node*)malloc(sizeof(struct Node*));
   nNode->data=val;
   nNode->next=(*head);
   *head=nNode;
}
int main(){

 Node* head=NULL;

 addList(&head,10);
 addList(&head,20);
 addList(&head,5);
 printList(&head);
 
 mergesort(&head);
 
 printList(&head);
 

return 0;
}
