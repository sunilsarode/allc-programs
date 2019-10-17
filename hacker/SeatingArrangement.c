#include<stdio.h>
#include<strings.h>
struct Data
{
    int x;
    int y;
    char string[2];
};

int main()
{

    struct Data arr[109];
    int k=11;
    for(int i=1; i<108; i++)
    {

        arr[i].x=i;
        //  printf("%d %d %d\n",k+i,i,k);
        arr[i].y=k+i;
        arr[k+i].x=k+i;
        arr[k+i].y=i;

        if(k==11||k==1)
        {
            strcpy(arr[i].string,"WS");
            strcpy(arr[k+i].string,"WS");
        }
        else if(k==3||k==9)
        {
            strcpy(arr[i].string,"MS");
            strcpy(arr[k+i].string,"MS");
        }
        else if(k==5||k==7)
        {
            strcpy(arr[i].string,"AS");
            strcpy(arr[k+i].string,"AS");
        }


        k=k-2;
        if(i%6==0)
        {
            k=11;
            i=6+i;
        }

    }

    int t=0,n=0;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        printf("%d %s\n",arr[n].y,arr[n].string);
        t--;
    }
    /*for(int i=1; i<=108; i++)
    {
        printf("%d %d %s\n",i,arr[i].y,arr[i].string);
    }*/


}
