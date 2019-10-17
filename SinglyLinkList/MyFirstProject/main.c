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
struct hash *hashTable=NULL;


struct Node *createNode(int i,int j,long number)
{

    struct Node *list;
    list = (struct Node *) malloc(sizeof(struct Node));
    list->i1 = i;
    list->j1 = j;
    list->inputVal=number;
    list->next = NULL;

    return list;
};

int main()
{
    int m=0,n=0;
    scanf("%d%d",&m,&n);

    hashTable=calloc(337,sizeof sizeof(struct hash));

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

            struct Node *newnode = createNode(i,j,copy);
            struct Node *myNode = hashTable[index].head;

            if (!myNode)
            {
                hashTable[index].head=newnode;
            }
            else
            {
                newnode->next=hashTable[index].head;
                hashTable[index].head=newnode;

            }
        }
    }

    int q=0;
    scanf("%d",&q);
    for(int i=0; i<q; i++)
    {
        long val=0;
        long copy=0;
        int boolean=0;
        scanf("%ld",&val);
        copy=val;
        if(val<0)
        {
            val=val*-1;
        }
        int index=hashFunction(val);
        struct Node *myNode = hashTable[index].head;
        if(!myNode)
        {
            printf("%d %d\n",-1,-1);
        }
        else
        {


            while (myNode->next!= NULL)
            {
                if (myNode->inputVal==copy)
                {
                    boolean=1;
                    printf("%d %d\n",myNode->i1,myNode->j1);
                    break;
                }
                myNode = myNode->next;
            }

            if(myNode->inputVal==copy &&!boolean)
            {
                boolean=1;
                printf("%d %d\n",myNode->i1,myNode->j1);

            }
            if(!boolean)
            {
                printf("%d %d\n",-1,-1);
            }
        }
    }

    return 0;
}
int hashFunction(long data)
{
    return (int)(data%337);
}
