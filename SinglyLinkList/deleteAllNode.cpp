#include<bits/stdc++.h>

using namespace std;

struct Node{
 
   int data;
   Node* next;
};

Node* create(int x){

   Node* n=(Node*)malloc(sizeof(Node));
   n->next=NULL;
   n->data=x;
   return n;
}

void printList(Node* head){

   while(head){
       cout<<head->data<<" ";
       head=head->next;
  }

}
int main(){

int n;
cin>>n;
Node* head=NULL;
Node* temp=NULL;
int x;
for(int i=0;i<n;i++){
     cin>>x;
     if(head==NULL){
         head=create(x);
         temp=head;
     }else{
         Node* newnode=create(x);
         temp->next=newnode;
         temp=temp->next;
     }
}

int val;
cin>>val;

Node* prev=NULL;
Node* t=head;

while(t){

   if(head->data==val){
        Node* t1=t;
        t=t->next;
        head=t;
        t1->next=NULL;
        free(t1);
   }else if(t->next!=NULL&&t->next->data==val){
        Node* t1=t->next;
        t->next=t->next->next;
        t1->next=NULL;
        free(t1);
   }else{
       t=t->next;
   }

   
}

printList(head);

return 0;
}
