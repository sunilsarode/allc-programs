#include <bits/stdc++.h>
using namespace std;

const int maxn = 60;

int n,num[maxn];

int main(){
 
    int ncase,T=1;
    cin >> ncase;
    while(ncase--){
        cin >> n;
        for(int i = 0; i <n; i++)   scanf("%d",&num[i]);
        printf("Case %d: ",T++);
        sort(num,num+n);
        int ans = num[n-1]-num[0];
        int lft = 1,rgt = n-2;
        int lftval = num[0],rgtval = num[n-1];
        while(lft <= rgt){
            int tmp = -1,cur;
            if(abs(lftval-num[lft])>tmp){
                tmp = abs(lftval-num[lft]);
                cur = 0;
            }
            if(abs(lftval-num[rgt])>tmp){
                tmp = abs(lftval-num[rgt]);
                cur = 1;
            }
            if(abs(rgtval-num[lft])>tmp){
                tmp = abs(rgtval-num[lft]);
                cur = 2;
            }
            if(abs(rgtval-num[rgt])>tmp){
                tmp = abs(rgtval-num[rgt]);
                cur = 3;
            }
            ans += tmp;
            if(cur==0){
                lftval = num[lft];
                lft++;
            }
            if(cur==1){
                lftval = num[rgt];
                rgt--;
            }
            if(cur==2){
                rgtval = num[lft];
                lft++;
            }
            if(cur==3){
                rgtval = num[rgt];
                rgt--;
            }
 
        }
        printf("%d\n",ans);
 
    }
    return 0;
}
