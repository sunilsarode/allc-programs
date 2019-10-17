#include <stdio.h>
#include <stdlib.h>

/* Single node will look as follows
Declaring Structure Variables with Structure definition */
struct node{
    struct node *prev;
    int n;
    struct node *next;
}*h,*temp,*temp1,*temp2,*temp4;
/**
Declaring Structure Variables with Structure definition (like java object)
you can haave default value like this

struct s {
        int i;
        int j;
    };

    struct s s_instance = { 10 ,20 };

    struct MyStruct_s
{
    int id;
} MyStruct_default = {3};

**/

/* Declaring All methods */
void insert1();
void insert2();
void insert3();
void traversebeg();
void traverseend(int);
void sort();
void search();
void updatelink();
void delete();

/* counter for number of Node*/
int count = 0;

void main(){
    int ch;

    h = NULL;
    temp = temp1 = NULL;

    printf("\n 1 - Insert at beginning");
    printf("\n 2 - Insert at end");
    printf("\n 3 - Insert at position i");
    printf("\n 4 - Delete at i");
    printf("\n 5 - Display from beginning");
    printf("\n 6 - Display from end");
    printf("\n 7 - Search for element");
    printf("\n 8 - Sort the list");
    printf("\n 9 - Update an element");
    printf("\n 10 - Exit");

    while (1){
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch){
        case 1:
            insert1();
            break;
        case 2:
            insert2();
            break;
        case 3:
            insert3();
            break;
        case 4:
            delete();
            break;
        case 5:
            traversebeg();
            break;
        case 6:
            temp2 = h;
            if (temp2 == NULL)
                printf("\n Error : List empty to display ");
            else{
                printf("\n Reverse order of linked list is : ");
                traverseend(temp2->n);
                printf("\n");
            }
            break;
        case 7:
            search();
            break;
        case 8:
            sort();
            break;
        case 9:
            updatelink();
            break;
        case 10:
            exit(0);
        default:
            printf("\n Wrong choice menu");
        }
    }
}

/* TO create an empty node */
void create(){
    int data;

    /* allocates requested size of bytes and returns a void pointer pointing to the
    first byte of the allocated space ,so cast it to struct node * */

    temp =(struct node *)malloc(1*sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("\n Enter value to node : ");
    scanf("%d", &data);
    temp->n = data;
    count++;
}

/*  TO insert at beginning */
void insert1(){
    if (h == NULL){
        create();
        h = temp;
        temp1 = h; //reserve the address of temp node so we can add node at the end
    }
    else{
        create();
        temp->next = h;
        h->prev = temp;
        h = temp;
    }
}

/* To insert at end */
void insert2(){

    if (h == NULL){
        create();
        h = temp;
        temp1 = h;  //reserve the address of temp node so we can add node at the end of list
    }
    else{
        create();
        temp1->next = temp;
        temp->prev = temp1;
        temp1 = temp;
    }
}

/* To insert at any position */
void insert3(){
    int pos, i = 2;

    printf("\n Enter position to be inserted : ");
    scanf("%d", &pos);
    temp2 = h;

     if ((h == NULL) && (pos != 1)){
        printf("\n Empty list cannot insert other than 1st position");
        printf("\n");
        return;
    }
    if ((pos < 1) || (pos > count + 1)){
        printf("\n Position out of range to insert");
        printf("\n");
        return;
    }
    if ((h == NULL) && (pos == 1)){
        create();
        h = temp;
        temp1 = h; //reserve the address of temp node so we can add node at the end
        return;
    }
    else{

        if(pos==1){
           insert1();
        }
        else{
            if(pos==count+1){
              insert2();
              return;
            }
            else{
             if(pos>count+1){
               printf("\n Position out of range to insert");
               printf("\n");
               return;
             }
            }

            /*
              below lines are very important to add the node at any position
            */

            while (i < pos){
                temp2 = temp2->next;
                i++;
            }
            create();
            temp->prev = temp2;
            temp->next = temp2->next;
            temp2->next->prev = temp;
            temp2->next = temp;
        }
    }
}

/* To delete an element */
void delete(){
    int i = 1, pos;

    printf("\n Enter position to be deleted : ");
    scanf("%d", &pos);
    temp2 = h;

    if ((pos < 1) || (pos >= count + 1)){
        printf("\n Error : Position out of range to delete");
        printf("\n");
        return;
    }
    if (h == NULL){
        printf("\n Error : Empty list no elements to delete");
        printf("\n");
        return;
    }
    else{
        while (i < pos){
            temp2 = temp2->next;
            i++;
        }
        if (i == 1){
            if (temp2->next == NULL){
                printf("\n Node deleted from list");

                /* releases previously allocated memory */
                free(temp2);
                temp2 = h = NULL;
                count--;
                printf("\n");
                return;
            }
        }
        if (temp2->next == NULL){
            temp2->prev->next = NULL;
            free(temp2);
            printf("\n Node deleted from list");
            count--;
            printf("\n");
            return;
        }
        temp2->next->prev = temp2->prev;
        if (i != 1)
            temp2->prev->next = temp2->next;    /* Might not need this statement if i == 1 check */
        if (i == 1)
            h = temp2->next;
        printf("\n Node deleted");
        printf("\n");
        free(temp2);
    }
    count--;
}

/* Traverse from beginning */
void traversebeg()
{
    temp2 = h;

    if (temp2 == NULL){
        printf("List empty to display \n");
        return;
    }
    printf("\n Linked list elements from begining : ");

    while (temp2->next != NULL){
        printf(" %d ", temp2->n);
        temp2 = temp2->next;
    }
    printf(" %d ", temp2->n);

    printf("\n");
}

/* To traverse from end recursively */
void traverseend(int i){

    if (temp2 != NULL){
        i = temp2->n;
        temp2 = temp2->next;
        traverseend(i);
        printf(" %d ", i);
    }
}

/* To search for an element in the list */
void search(){
    int data, count = 0;
    temp2 = h;

    if (temp2 == NULL){
        printf("\n Error : List empty to search for data");
        printf("\n");
        return;
    }
    printf("\n Enter value to search : ");
    scanf("%d", &data);
    while (temp2 != NULL){
        if (temp2->n == data){
            printf("\n Data found in %d position",count + 1);
            printf("\n");
            return;
        }
        else{
             temp2 = temp2->next;
        }

            count++;
    }
    printf("\n Error : %d not found in list", data);
    printf("\n");
}

/* To sort the linked list */
void sort(){
    int i, j, x;

    temp2 = h;
    temp4 = h;

    if (temp2 == NULL){
        printf("\n List empty to sort");
        printf("\n");
        return;
    }

    for (temp2 = h; temp2 != NULL; temp2 = temp2->next){
        for (temp4 = temp2->next; temp4 != NULL; temp4 = temp4->next){
            if (temp2->n > temp4->n)
            {
                x = temp2->n;
                temp2->n = temp4->n;
                temp4->n = x;
            }
        }
    }
    traversebeg();
}

/* To update a node value in the list */
void updatelink(){

    int linkno, data,c=1;

    printf("\n Enter no of node to be updated : ");
    scanf("%d", &linkno);
    printf("\n Enter new data : ");
    scanf("%d", &data);
    temp2 = h;
    if (temp2 == NULL){
        printf("\n Error : List empty no node to update");
        printf("\n");
        return;
    }
    while (temp2 != NULL){
        if (c==linkno){

            temp2->n = data;
            traversebeg();
            return;
        }
        else{
             temp2 = temp2->next;
             c++;
        }

    }
    printf("\n Error : Number %d is not a node in list to update", linkno);
    printf("\n");
}

/**


 1 - Insert at beginning
 2 - Insert at end
 3 - Insert at position i
 4 - Delete at i
 5 - Display from beginning
 6 - Display from end
 7 - Search for element
 8 - Sort the list
 9 - Update an element
 10 - Exit
 Enter choice : 3

 Enter position to be inserted : 1

 Enter value to node : 12

 Enter choice : 1

 Enter value to node : 13

 Enter choice : 3

 Enter position to be inserted : 3

 Enter value to node : 11

 Enter choice : 5

 Linked list elements from begining :  13  12  11
 Enter choice : 3

 Enter position to be inserted : 4

 Enter value to node : 1

 Enter choice : 5

 Linked list elements from begining :  13  12  11  1
 Enter choice : 3

 Enter position to be inserted : 6

 Position out of range to insert
 Enter choice : 3

 Enter position to be inserted : 1

 Enter value to node : 4

 Enter choice : 5

 Linked list elements from begining :  4  13  12  11  1
 Enter choice : 3

 Enter position to be inserted : 0

 Position out of range to insert
 Enter choice : 2

 Enter value to node : 2

 Enter choice : 5

 Linked list elements from begining :  4  13  12  11  1  2
 Enter choice : 6

 Reverse order of linked list is :  2  1  11  12  13  4
 Enter choice : 8

 Linked list elements from begining :  1  2  4  11  12  13
 Enter choice : 5

 Linked list elements from begining :  1  2  4  11  12  13
 Enter choice : 9

 Enter no of node to be updated : 1

 Enter new data : 6

 Linked list elements from begining :  6  2  4  11  12  13
 Enter choice : 8

 Linked list elements from begining :  2  4  6  11  12  13
 Enter choice : 0

 Wrong choice menu
 Enter choice : 9

 Enter no of node to be updated : 0

 Enter new data : 1

 Error : Number 0 is not a node in list to update
 Enter choice : 9

 Enter no of node to be updated : 7

 Enter new data : 4

 Error : Number 7 is not a node in list to update
 Enter choice : 9

 Enter no of node to be updated : 1

 Enter new data : 1

 Linked list elements from begining :  1  4  6  11  12  13
 Enter choice : 10  **/
/**


 1 - Insert at beginning
 2 - Insert at end
 3 - Insert at position i
 4 - Delete at i
 5 - Display from beginning
 6 - Display from end
 7 - Search for element
 8 - Sort the list
 9 - Update an element
 10 - Exit
 Enter choice : 1

 Enter value to node : 30

 Enter choice : 3

 Enter position to be inserted : 2

 Enter value to node : 10

 Enter choice : 2

 Enter value to node : 20

 Enter choice : 5

 Linked list elements from begining :  30  10  20

 Enter choice : 3

 Enter position to be inserted : 4

 Enter value to node : 40

 Enter choice : 6

 Reverse order of linked list is :  40  20  10  30

 Enter choice : 4

 Enter position to be deleted : 4

 Node deleted from list

 Enter choice : 5

 Linked list elements from begining :  30  10  20

 Enter choice : 5

 Linked list elements from begining :  30  10  20

 Enter choice : 3

 Enter position to be inserted : 5

 Position out of range to insert

 Enter choice : 7

 Enter value to search : 10

 Data found in 2 position

 Enter choice : 8

 Linked list elements from begining :  10  20  30

 Enter choice : 9

 Enter no of node to be updated : 5

 Enter new data : 10

 Error : Number 5 is not a node in list to update

 Enter choice : 9

 Enter no of node to be updated : 3

 Enter new data : 40

 Linked list elements from begining :  10  20  40

 Enter choice : 4

 Enter position to be deleted : 6

 Error : Position out of range to delete

 Enter choice : 10

 **/
