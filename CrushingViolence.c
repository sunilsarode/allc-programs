#include<stdio.h>
struct Data
{
    int beatCount;
    int willBeat;
    int crushNumber;
    int val;
};
int main()
{
    int t=0;
    scanf("%d",&t);
    while(t>0)
    {

        int n=0;
        scanf("%d",&n);
        struct Data boyArr[n];
        struct Data girlArr[n];
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&boyArr[i].crushNumber);
            boyArr[i].beatCount=0;
            boyArr[i].willBeat=0;
            boyArr[i].val=1;

        }
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&girlArr[i].crushNumber);
            girlArr[i].beatCount=0;
            girlArr[i].willBeat=0;
            girlArr[i].val=1;
        }
        for(int i=1; i<=n; i++)
        {
            if(!(girlArr[boyArr[i].crushNumber].crushNumber==i))
            {
                ++boyArr[girlArr[boyArr[i].crushNumber].crushNumber].beatCount;
                boyArr[i].willBeat=girlArr[boyArr[i].crushNumber].crushNumber;
            }

            if(!(boyArr[girlArr[i].crushNumber].crushNumber==i))
            {
                ++girlArr[boyArr[girlArr[i].crushNumber].crushNumber].beatCount;
                girlArr[i].willBeat=boyArr[girlArr[i].crushNumber].crushNumber;
            }

        }

        int maxBeat=0;
        int pairCount=0;
        for(int i=1; i<=n; i++)
        {
            if(boyArr[i].beatCount>maxBeat)
            {
                maxBeat=boyArr[i].beatCount;
            }
            if(boyArr[boyArr[i].willBeat].willBeat==i&&boyArr[i].val)
            {

                pairCount++;
                boyArr[i].val=0;
                boyArr[boyArr[i].willBeat].val=0;

            }
        }
        for(int i=1; i<=n; i++)
        {
            if(girlArr[i].beatCount>maxBeat)
            {
                maxBeat=girlArr[i].beatCount;
            }
            if(girlArr[girlArr[i].willBeat].willBeat==i&&girlArr[i].val)
            {
                pairCount++;
                girlArr[i].val=0;
                girlArr[girlArr[i].willBeat].val=0;

            }
        }
        printf("%d %d ",maxBeat,pairCount);
        printf("\n");
        t--;
    }
    return 0;

}
