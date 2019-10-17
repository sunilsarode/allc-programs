#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **array;
    array = malloc(100000 * sizeof(int *));

// Here we make each row of it's own, individual length.
    for(int i = 0; i < 100000; i++)
    {
        array[i] = malloc(100000* sizeof(int));

    }
    for(int i=0;i<100000;i++){
        for(int j=0;j<100000;j++){
            array[i][j]=0;
        }
    }
    printf("%d",array[0][0]);
}
