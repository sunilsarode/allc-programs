#include<stdio.h>
#include <stdlib.h>
struct Node
{
    int i1;
    int j1;
    long inputVal;
    struct Node * next;
};
struct hash
{
    struct Node * head;
};

void insertAtTheEnd(struct Node * link,int i,int j,long data);
struct Node *search_value(struct Node *list, long num);
int hashFunction(long data);
int main()
{
    int m=0,n=0;
    scanf("%d%d",&m,&n);

    struct Node* arr[337];
    for(int i=0; i<337; i++)
    {
        arr[i]=NULL;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            long data=0;
            long copy=0;

            scanf("%ld",&data);
            copy=data;
            if(data<0)
            {

                data=data*-1;
            }
            int index=hashFunction(data);

            if(arr[index]==NULL)
            {

                struct Node *list;
                list = (struct Node *) malloc(sizeof(struct Node));
                list->i1 = i;
                list->j1 = j;
                list->inputVal=copy;
                list->next = NULL;

                arr[index]=list;

            }
            else
            {
                struct Node *list;
                list=arr[index];
                insertAtTheEnd(list,i,j,copy);
            }
        }
    }

    int q=0;
    scanf("%d",&q);
    for(int i=0; i<q; i++)
    {
        long val=0;
        long copy=0;
        scanf("%ld",&val);
        copy=val;
        if(val<0)
        {
            val=val*-1;
        }
        int index=hashFunction(val);
        if(arr[index]==NULL)
        {
            printf("%d %d\n",-1,-1);
        }
        else
        {
            struct Node *list;
            list=arr[index];
            struct Node *links=search_value(list,copy);
            if(links==NULL)
            {
                printf("%d %d\n",-1,-1);
            }
            else
            {
                printf("%d %d\n",links->i1,links->j1);
            }

        }
    }

    return 0;
}
int hashFunction(long data)
{
    return (int)(data%337);
}
void insertAtTheEnd(struct Node * list,int i1,int j1,long val)
{
    struct Node *temp=list;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->i1=i1;
    newNode->j1=j1;
    newNode->inputVal=val;
    newNode->next=NULL;
    temp->next=newNode;

}
struct Node *search_value(struct Node *list, long num)
{

    struct Node *temp=list;
    while (temp!= NULL)
    {
        if (temp->inputVal == num)
        {
            break;
        }

        temp = temp->next;
    }

    return temp;
}

