#include<stdio.h>
int buy(int i,int j);
int min(int a,int b);
int n=0;
int table[100000][3];
int arr[100000][3];
int main()
{
    int t=0;
    scanf("%d",&t);
    while(t>0)
    {
        n=0;
        scanf("%d",&n);

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<3; j++)
            {
                scanf("%d",&arr[i][j]);
                table[i][j]=-1;
            }
        }
        int ans=min(buy(0,0),min(buy(0,1),buy(0,2)));
        printf("%d\n",ans);
        t--;
    }
    return 0;

}
int buy(int shop,int item)
{

    if(shop==n-1)
    {
        return arr[shop][item];
    }
    else if(table[shop][item]!=-1)
    {
        return table[shop][item];
    }
    else
    {
        switch(item)
        {
        case 0:

            table[shop+1][1]=buy(shop+1,1);
            table[shop+1][2]=buy(shop+1,2);
            table[shop][item]=arr[shop][item]+min(table[shop+1][1],table[shop+1][2]);


            break;
        case 1:

            table[shop+1][0]=buy(shop+1,0);
            table[shop+1][2]=buy(shop+1,2);
            table[shop][item]=arr[shop][item]+min(table[shop+1][0],table[shop+1][2]);


            break;
        case 2:

            table[shop+1][0]=buy(shop+1,0);
            table[shop+1][1]=buy(shop+1,1);
            table[shop][item]=arr[shop][item]+min(table[shop+1][0],table[shop+1][1]);


            break;
        }
        return table[shop][item];
    }

}
int min(int a,int b)
{
    return a<b?a:b;
}
