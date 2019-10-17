#include<bits/stdc++.h>
using namespace std;


bool isprime(int number) {
    for (int i = 2; i < sqrt(number); i++) {
        if (number % i == 0 && i != number) return false;
    }
    return true;
}

long long convert(long long num,int position ,int value) // position is ones tens hundreds etc
{
    int ones=num%10;num/=10;
    int tens=num%10;num/=10;
    int hunderds=num%10;num/=10;
    int thousands=num%10;num/=10;

    if(position==1)
    {
        return ( (thousands*1000) +(hunderds*100) + (tens*10) + (value)  );
    }
    else if (position==2)
    {
        return ( (thousands*1000) +(hunderds*100) + (value*10) + (ones)  );
    }
    else if (position==3)
    {
        return ( (thousands*1000) +(value*100) + (tens*10) + (ones)  );
    }
    else if (position==4)
    {
        return ( (value*1000) +(hunderds*100) + (tens*10) + (ones)  );
    }
}

int n;long long  l,m;

int main()
{
    cin>>n;
    while(n)
    {
        cin>>l>>m;

        long long level=0;
        queue<  pair< int,int >  > q;
        q.push(make_pair(l,0) );

        int visited[10010]={0};
        visited[l]=1;

        int flag=0;
        while(q.size())
        {
            l=q.front().first;
            level=q.front().second;
            q.pop();

            if(l==m)
            {
                cout<<level<<"\n";
                flag=1;
                break;
            }

            //cout<<l<<" "<<level <<"\n";

            for(int i=0;i<=9;i++)
            {
                /////////////////////////////
                // for thousands's place digit
                if(i>0)
                {
                    long long a2=convert(l,4,i);

                    if(   visited[a2]!=1 && isprime(a2) )
                    {
                        q.push( make_pair( a2,level+1 ) );
                        visited[a2]=1;
                    }

                }

                //////////////////////////////////
                // for hunderd's place digit

                long long b2=convert(l,3,i);
                cout<<b2<<endl;
                if(  visited[b2]!=1 && isprime(b2) )
                {
                    //cout<<a2<<"\n";
                    q.push( make_pair( b2,level+1 ) );
                    visited[b2]=1;
                }

                ////////////////////////////
                // for ten's place digit
                long long c2=convert(l,2,i);

                if(  visited[c2]!=1 && isprime(c2) )
                {

                    q.push( make_pair( c2,level+1 ) );
                    visited[c2]=1;
                }

                ////////////////////////////
                // for one's place digit
                long long d2=convert(l,1,i);

                if(  visited[d2]!=1 && isprime(d2) )
                {
                    //cout<<a2<<"\n";
                    q.push( make_pair( d2,level+1 ) );
                    visited[d2]=1;
                }
            }

        }
        if(flag==0)
        {
            cout<<"Impossible"<<"\n";
        }

        n--;
    }

    return 0;
}
