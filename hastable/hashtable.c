#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct hash *hashTable = NULL;
int eleCount = 0;

struct node
{
    int i, j;
    long inputVal;
    struct node *next;
};

struct hash
{
    struct node *head;
};
int hashFunction(long data)
{
    return (int)(data%337);
}

struct node * createNode(int i,int j,long val)
{
    struct node *newnode;
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->i = i;
    newnode->j = j;
    newnode->inputVal=val;
    newnode->next = NULL;
    return newnode;
}

void insertToHash(int hashIndex,int i,int j,long copy)
{

    struct node *newnode = createNode(i,j,copy);
    /* head of list for the bucket with index "hashIndex" */
    if (!hashTable[hashIndex].head)
    {
        hashTable[hashIndex].head = newnode;

        return;
    }
    /* adding new node to the list */
    newnode->next = (hashTable[hashIndex].head);
    /*
     * update the head of the list and no of
     * nodes in the current bucket
     */
    hashTable[hashIndex].head = newnode;

    return;
}



void searchInHash(int hashIndex,long key)
{
    int flag=0;
    struct node *myNode;
    myNode = hashTable[hashIndex].head;
    if (!myNode)
    {
        printf("%d %d\n",-1,-1);

        return;
    }
    while (myNode != NULL)
    {
        if (myNode->inputVal == key)
        {
            printf("%d %d\n",myNode->i,myNode->j);
            flag = 1;
            break;
        }
        myNode = myNode->next;
    }
    if (!flag)
         printf("%d %d\n",-1,-1);
    return;
}


int main()
{
    int m=0,n=0;
    scanf("%d%d",&m,&n);

    hashTable = (struct hash *) calloc(337, sizeof(struct hash));
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
            insertToHash(index,i,j,copy);
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
        searchInHash(index,copy);

    }
    return 0;
}
