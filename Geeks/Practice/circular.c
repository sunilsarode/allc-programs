#include<stdio.h>
#include<stdlib.h>

typedef struct node{
 
 int data;
 struct node *next;
} Node;
int gcount=0;
Node *last=NULL;
Node *createNode(int val){
  Node * new=malloc(sizeof(Node));
  new->next=NULL;
  new->data=val;
  return new;
}

void insertAtBeg(int val){
  
  if(last==NULL){
    
     last=createNode(val);
     last->next=last;
  
  }else{
    
    Node *new=createNode(val);
    new->next=last->next;//very imp 
    last->next=new;
  }
  gcount++;
}

void insertAtEnd(int val){
  if(last==NULL){
    
     last=createNode(val);
     last->next=last;
  
  }else{

     Node *new=createNode(val);
     new->next=last->next;
     last->next=new;
     last=new;//very imp
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
   Node *first=last->next;
   Node *temp=first;
   while(c!=pos){
     if(c>1){
        temp=temp->next;
     }
      first=first->next;
      c++;
   }
   new->next=first;
   temp->next=new;  
   gcount++; 
}

void deleteStart(){
  if(last==NULL){
    printf("List is empy\n"); 
      return;
  }
 
  if(last->next==last){
     printf("%d\n",last->data);
     free(last);
     last=NULL;
  }else{
  
  Node *first=last->next;
  Node *temp=first;
  first=first->next;
  last->next=first;
  printf("%d\n",temp->data);
  temp->next=NULL;
  free(temp);
  
  }
  gcount--;

}

void deleteEnd(){

   if(last==NULL){
    printf("List is empty\n"); 
      return;
  }
 
  if(last->next==last){
     printf("%d\n",last->data);
     free(last);
     last=NULL;
  }else{
     
    Node *first=last->next;
    Node *temp=first;
    while(temp->next->next!=first){
       temp=temp->next;
    }
    Node *temp1=temp->next;
    temp->next=last->next;
    last=temp;
    printf("%d\n",temp1->data);
    temp1->next=NULL;
    free(temp1);
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

  Node *first=last->next;
  Node *temp=first;
  c++;
  while(c!=pos){
     if(c>1){
        temp=temp->next;
    }
   first=first->next;
   c++;
  }
 
  temp->next=first->next;
  printf("%d\n",first->data);
  first->next=NULL;
  free(first);
 
  gcount--;
}


void print(){
  
   printf("Global count %d\n",gcount);

   if(last==NULL){
      printf("List is empty\n");
      return;
   }
   
   Node *first=last->next;
 
   do{
       printf("%d ",first->data);
       first=first->next;
   }while(first!=last->next);//very imp again think sunil

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
printf("Enter 8 to for last element\n");

printf("Enter 9 to exit\n");



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
   case 9:
       exit(0);
       break;
   case 8:
       if(last!=NULL){
         printf("%d\n",last->data);
       }else{
         printf("list empty");
       }
       break;
   
  }

}
return 0;
}
