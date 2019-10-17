#include<stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    long rollNumber;
    char data[25];
    struct Node * next;
};
struct hash
{
    struct Node * head;
};
struct info
{
    long rollno;
    char name[25];
};

void insertAtTheEnd(struct Node * link,long rollnumber,char arr[]);
struct Node *search_value(struct Node *list, long num);
int hashFunction(long data);
int main()
{
    int n=0;
    scanf("%d",&n);
    struct info nameArr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%ld", &nameArr[i].rollno);
        scanf("%s", &nameArr[i].name);
    }
    int q=0;
    scanf("%d",&q);
    long queryArr[q];

    for(int i=0; i<q; i++)
    {
        scanf("%ld",&queryArr[i]);
    }

    struct Node* arr[33791];
    for(int i=0; i<33791; i++)
    {
        arr[i]=NULL;
    }
    for(int i=0; i<n; i++)
    {

        int index=hashFunction(nameArr[i].rollno);

        if(arr[index]==NULL)
        {

            struct Node *list;
            list = (struct Node *) malloc(sizeof(struct Node));
            strcpy(list->data,nameArr[i].name);
            list->rollNumber=nameArr[i].rollno;
            list->next = NULL;
            arr[index]=list;

        }
        else
        {
            struct Node *list;
            list=arr[index];
            insertAtTheEnd(list,nameArr[i].rollno,nameArr[i].name);
        }

    }

    for(int i=0; i<q; i++)
    {
        int index=hashFunction(queryArr[i]);
        if(arr[index]==NULL)
        {

        }
        else
        {
            struct Node *links=search_value(arr[index],queryArr[i]);
            printf("%s\n",links->data);
        }
    }

    return 0;
}
int hashFunction(long data)
{
    return (int)(data%33791);
}
void insertAtTheEnd(struct Node * list,long rollnumber,char arr[])
{
    struct Node *temp=list;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->rollNumber=rollnumber;
    strcpy(newNode->data,arr);

    newNode->next=NULL;
    temp->next=newNode;

}
struct Node *search_value(struct Node *list, long num)
{

    struct Node *temp=list;
    while (temp!= NULL)
    {
        if (temp->rollNumber == num)
        {
            break;
        }

        temp = temp->next;
    }

    return temp;
}

