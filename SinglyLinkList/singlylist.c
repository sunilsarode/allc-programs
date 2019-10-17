#include<stdio.h>
#include<stdlib.h>

struct Node{
   int data;
   struct Node* next;
};
void printList(struct Node* head){
     while(head){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
struct Node* reverse(struct Node* head){
     
    struct Node* temp=NULL;
    struct Node* prev=NULL;
    
    while(head){
        temp=head;
        head=head->next;
        temp->next=prev;
        prev=temp;
    }
    
    head=prev;
    return head;
}

struct Node* create(int data){
    struct Node* new=(struct Node*)malloc(sizeof(struct Node));
    new->data=data;
    new->next=NULL;
    return new;
}
struct Node* addToFinal(int val,struct Node* final_list){
    
    struct Node* new_node=create(val);
             
    if(final_list==NULL){
        final_list=new_node;
    }else{
         struct Node* temp=final_list;
            while(temp->next!=NULL){
                  temp=temp->next;
            }
             temp->next=new_node;
    }
    
    return final_list;
}


struct Node* addTwoNumbers(struct Node* l1, struct Node* l2){
    
    if(l1==NULL){
        return l2;
        
    }
    if(l2==NULL){
        return l1;
    }
    
    int n1=0,n2=0;
    struct Node* t1=l1;
    struct Node* t2=l2;
    while(t1){
        ++n1;
        t1=t1->next;
    }
    while(t2){
        ++n2;
        t2=t2->next;
    }
    int diff=0;
    n1>n2?(diff=(n1-n2)):(diff=(n2-n1));
    //printf("%d\n",diff);
    if(n1>n2){
        while(diff--){
             struct Node* new=create(0);
             new->next=l2;
             l2=new;   
        }
       
    }else if(n1<n2){
       while(diff--){
            struct Node* new=create(0);
            new->next=l1;
            l1=new;
       } 
       
    }
    
     
     l1=reverse(l1);
     l2=reverse(l2);
     printList(l1);
     printList(l2);
    
    struct Node* final_list=NULL;
    int carry=0;
    int remainder=0;
    int add=0;
    
    while(l1&&l2){
    
         int f=l1->data;
         int s=l2->data;
         int sum=f+s+carry;
        
         if(sum/10!=0){
             remainder=sum%10;
             
             final_list=addToFinal(remainder,final_list);
    
             carry=1;
             
         }else{
             
             final_list=addToFinal(sum,final_list);
         }
        l1=l1->next;
        l2=l2->next;
         
    }

    if(l1==NULL&&carry==1){
         final_list=addToFinal(1,final_list);     
    }
    
    return final_list;
    //return NULL;
}



int main(){

 struct Node* head=NULL;
 struct Node* head1=NULL;
  for(int i=1;i<=5;i++){
      struct Node* new=create(i);
       if(head==NULL){
           head=new;
      }else{
          struct Node* temp=head;
          while(temp->next!=NULL){
               temp=temp->next;
          }
         temp->next=new;
      }
  }
 
 for(int i=1;i<=3;i++){
      struct Node* new=create(i);
       if(head1==NULL){
           head1=new;
      }else{
          struct Node* temp=head1;
          while(temp->next!=NULL){
               temp=temp->next;
          }
         temp->next=new;
      }
  }
  
  //printList(head);
  //printList(head1);
  //head=reverse(head);
  struct Node* final=addTwoNumbers(head,head1);
  printList(final);
 
return 0;
}
/*
struct ListNode* create(int val) {
    
    struct ListNode* new=(struct ListNode*)malloc(sizeof(struct ListNode));
    new->val=val;
    new->next=NULL;
    return new;
}

struct ListNode* reverse(struct ListNode* head){
     
    struct ListNode* temp=NULL;
    struct ListNode* prev=NULL;
    
    while(head){
        temp=head;
        head=head->next;
        temp->next=prev;
        prev=temp;
    }
    
    head=prev;
    
    return head;
    
}

struct ListNode* addToFinal(int val,struct ListNode* final_list){
    
    struct ListNode* new_node=create(val);
             
    if(final_list==NULL){
        final_list=new_node;
    }else{
         struct ListNode* temp=final_list;
            while(temp->next!=NULL){
                  temp=temp->next;
            }
             temp->next=new_node;
    }
    
    return final_list;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
    if(l1==NULL){
        return l2;
        
    }
    if(l2==NULL){
        return l1;
    }
    
    int n1=0,n2=0;
    struct ListNode* t1=l1;
    struct ListNode* t2=l2;
    while(t1){
        ++n1;
        t1=t1->next;
    }
    while(t2){
        ++n2;
        t2=t2->next;
    }
    int diff=0;
    n1>n2?(diff=(n1-n2)):(diff=(n2-n1));
    //printf("%d\n",diff);
    if(n1>n2){
        while(diff--){
             struct ListNode* new=create(0);
             new->next=l2;
             l2=new;   
        }
       
    }else if(n1<n2){
       while(diff--){
            struct ListNode* new=create(0);
            new->next=l1;
            l1=new;
       } 
       
    }
     l1=reverse(l1);
     l2=reverse(l2);
    
    
    struct ListNode* final_list=NULL;
    int carry=0;
    int remainder=0;
    int add=0;
    
    while(l1&&l2){
    
         int f=l1->val;
         int s=l2->val;
         int sum=f+s+carry;
        
         if(sum/10!=0){
             remainder=sum%10;
             
             final_list=addToFinal(remainder,final_list);
    
             carry=1;
             
         }else{
             
             final_list=addToFinal(sum,final_list);
             carry=0;
         }
        l1=l1->next;
        l2=l2->next;
         
    }

    if(l1==NULL&&carry==1){
         final_list=addToFinal(1,final_list);     
    }
    
    return final_list;
}


*/
