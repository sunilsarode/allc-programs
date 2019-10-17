#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
    //Complete this function
    Node *new=(Node *)malloc(sizeof(Node));
    new->data=data;
    new->next=NULL;
    

    if(head==NULL){
        head=new;
    }else{
        Node * back=head;
        while(back->next!=NULL){
            back=back->next;
        } 
        back->next=new;  
    }
    return head;
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
    int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}

