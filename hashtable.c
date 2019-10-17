
#include<stdio.h>
const long int hsize=320000;
struct hdata
{
    int N;
    int M;
    long X;
    struct hdata *next;
};
int main()
{
    int M,N,Q,found=0,j;
    long X,i,loc;
    struct hdata htable[hsize],*ptr;
    for(i=0;i<hsize;i++)
    {
        htable[i].N=-1;
        htable[i].M=-1;
        htable[i].next=NULL;
    }
    scanf("%d%d",&N,&M);
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%ld",&X);
            loc=(X%(hsize/2))+(hsize/2);
            if(loc==(hsize/2))
            	loc=0;
            if(htable[loc].N!=-1)
            {
                if(htable[loc].X==X)
                    break;
                if(htable[loc].next==NULL)
                    ptr=htable[loc].next=(struct hdata*)malloc(sizeof(struct hdata));
                else
                {
                	ptr=htable[loc].next;
                    while(ptr->next!=NULL)
                    {
                        if(ptr->X==X)
                        {
                            found=1;
                            break;
                        }
                        ptr=ptr->next;
                    }
                }
                if(ptr->X==X)
                	found=1;
                if(found)
                {
                    found=0;
                    continue;
                }
                ptr->next=(struct hdata*)malloc(sizeof(struct hdata));
                ptr=ptr->next;
                ptr->N=i;
                ptr->M=j;
                ptr->X=X;
                ptr->next=NULL;
            }
            else
            {
                htable[loc].N=i;
                htable[loc].M=j;
                htable[loc].X=X;
            }
        }
    }
    scanf("%d",&Q);
    while(Q--)
    {
        scanf("%ld",&X);
        loc=(X%(hsize/2))+(hsize/2);
        if(loc==(hsize/2))
        	loc=0;
        if(htable[loc].X!=X)
        {
        	if(htable[loc].next!=NULL)
        	{
            	ptr=htable[loc].next;
            	while(ptr->next!=NULL)
            	{
                	if(ptr->X==X)
                	{
	                    found=1;
    	                break;
        	        }
            	    ptr=ptr->next;
            	}
            	if(ptr->X==X)
            		found=1;
            	if(found)
	            {
    	            printf("%d %d\n",ptr->N,ptr->M);
        	        found=0;
            	}
            	else
	                printf("%d %d\n",-1,-1);
        	}
        	else
        		printf("%d %d\n",-1,-1);
        }
        else
        	printf("%d %d\n",htable[loc].N,htable[loc].M);
    }
    return 0;
}
