#include<stdio.h>

struct Data
{
    int index1;
    int index2;
    int index;
};
int chek(struct Data data[],int d1,int d2,int i,int h1);
int main()
{
    int t=0;
    scanf("%d",&t);
    while(t>0)
    {
        int m=0,n=0,var=1;
        scanf("%d%d",&m,&n);
        struct Data hastable[n];
        for(int i=0; i<n; i++)
        {
            hastable[i].index1=0;
            hastable[i].index2=0;
            hastable[i].index=0;
        }
        int d1=0,d2=0;
        for(int i=0; i<m; i++)
        {
            scanf("%d%d",&d1,&d2);

            if(hastable[d1].index==0)
            {
                hastable[d1].index1=d1;
                hastable[d1].index2=d2;
                hastable[d1].index=i;
            }
            else if(hastable[d2].index==0)
            {
                hastable[d2].index1=d1;
                hastable[d2].index2=d2;
                hastable[d2].index=i;
            }
            else
            {
                if(!(chek(hastable,d1,d2,i,d1)))
                {
                    printf("%s\n","rehash necessary");
                    var=0;
                    break;
                }

            }
        }
        if(var)
        {
            printf("%s\n","successful hashing");
        }

        t--;

    }
    return 0;

}
int  chek(struct Data hastable[],int d1,int d2,int i,int h1)
{

    int in1=hastable[h1].index1;
    int in2=hastable[h1].index2;
    int val=hastable[h1].index;
    if(in2==d2)
    {

        return 0;
    }
    else if(hastable[d2].index==0)
    {

        hastable[d2].index1=d1;
        hastable[d2].index2=d2;
        hastable[d2].index=i;
        return 1;
    }
    else
    {

        hastable[d1].index1=d1;
        hastable[d1].index2=d2;
        hastable[d1].index=i;
        chek(hastable,in1,in2,val,in2);

    }
}

