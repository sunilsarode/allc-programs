#include<stdio.h>
#include<stdlib.h>
struct node* createNode(int data);
void printList();
void revesrList();
void reverse();
struct node* head=NULL;
struct node
{
    int data;
    struct node *next;
};

int main()
{
    int val=0;

    for(int i=0; i<4; i++)
    {
        scanf("%d",&val);
        struct node* new=createNode(val);
        if(i==0)
        {
            head=new;
        }
        else
        {

            //adding at the end
            struct node *temp=head;

            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=new;
        }
    }

    printList();
    revesrList();
    printList();
    reverse(head);
    printList();

    return 0;
}
void printList()
{

    struct node *temp=head;

    while(temp)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");

}
void reverse(struct node* p){
	if(p->next==NULL){
		head=p;
		return;
	}
	reverse(p->next);
	p->next->next=p;
	p->next=NULL;
		
}
void revesrList()
{
    struct node* prevNode=NULL;
    struct node* nextNode=NULL;
    struct node *current=head;
    while(current!=NULL)
    {
		nextNode=current->next;
		current->next=prevNode;
        prevNode=current;
        current=nextNode;
    }
    
    head=prevNode;


}
struct node* createNode(int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;

    return temp;

}
