#include <bits/stdc++.h>
using namespace std;
int p[1000000],s[1000000];



void init(int n){
   for(int i=0;i<=n;i++){
       p[i]=i;
       s[i]=1;
  }
}

int root(int x){
  
   while(p[x]!=x){
      x=p[x];
   }
    return x;
}

void un(int x,int y)
{

int i=root(x);
int j=root(y);
if(i==j)
  return;


if(s[i]>s[j])
{
p[j]=i;
s[i]=s[i]+s[j];
}
else
{
p[i]=j;
s[j]=s[j]+s[i];
}
}

int main()
{
int n,m,i,x,y;
cin >> n >> m;
init(n);

while(m--)
{
cin >> x >> y;
un(x,y);
}
for(i=1;i<=n;i++)
{
cout<<(s[root(i)]-1)<<" ";
}
return 0;
}
