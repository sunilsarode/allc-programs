#include<stdio.h>
typedef long long ll;
inline void in(ll *p) {
    *p=0;register char ch=0;
    while(ch<'0' || ch>'9') {ch=getchar();}
    while(ch>='0' && ch<='9') {*p=(*p<<1)+(*p<<3)+ch-'0'; ch=getchar();}
}

int main(){
 ll t=0;
  in(&t);
  printf("%lld",t);
return 0;
}
