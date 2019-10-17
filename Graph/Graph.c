#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct hash *hashTable = NULL;
struct node
{
    int inputVal;
    struct node *next;
};

struct hash
{
    struct node *head;
};

struct node * createNode(int val)
{
    struct node *newnode;
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->inputVal=val;
    newnode->next = NULL;
    return newnode;
}

void insertToHash(int hashIndex,int val)
{
	//static int c=0;
	//printf("%d",++c);

    struct node *newnode = createNode(val);
    
    if (!hashTable[hashIndex].head)
    {
        hashTable[hashIndex].head = newnode;

        return;
    }
    
    newnode->next = (hashTable[hashIndex].head);
    hashTable[hashIndex].head = newnode;

    return;
}



void searchInHash(int hashIndex,int key)
{
	int flag=0;
    struct node *myNode;
    myNode = hashTable[hashIndex].head;
    if (!myNode)
    {
        printf("No\n");

        return;
    }
    while (myNode != NULL)
    {
        if (myNode->inputVal == key)
        {
            printf("Yes\n");
            flag=1;
            break;
        }
        myNode = myNode->next;
    }
    
    if(!flag){
		printf("No\n");
	}
    return;
}
void print()
{
	struct node *myNode;
    for(int i=0;i<5;i++){
		
		myNode= hashTable[i].head;
		while(myNode){
			
			printf("%d",myNode->inputVal);
			myNode=myNode->next;
		}
	}
		
    return;
}


int main()
{
    int t=0;
    scanf("%d",&t);
			
    while(t--){
		
		hashTable = (struct hash *) calloc(100000, sizeof(struct hash));
			
				int n=0,m=0,copy=0;
				scanf("%d",&n);
				for(int i=0;i<n;i++){
					scanf("%d",&m);
					if(m<0){
						copy=m*-1;
						insertToHash(copy,m);	
					}else{
						insertToHash(m,m);	
					}
				}
				
				//print();
				//printf("%d",hashTable[0].head->inputVal);
				
				int q=0;
				scanf("%d",&q);
				for(int i=0; i<q; i++)
				{
					int val=0;
					int copy=0;
					scanf("%d",&val);
					copy=val;
					if(val<0)
					{
						val=val*-1;
					}
					
					searchInHash(val,copy);

				}
				
				free(hashTable);
				hashTable=NULL;
				
		}
		
		
	
    return 0;
}
