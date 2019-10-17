#include<stdio.h>
int main()
{

    int l,w,h,n=0;
    scanf("%d",&l);
    scanf("%d",&n);
    int i=0;
    for(;i<n;i++){
        scanf("%d%d",&w,&h);
        if(w<l||h<l){
            printf("UPLOAD ANOTHER");
            printf("\n");
        }else if((w>=l&&h>=l)&&w==h){
            printf("ACCEPTED");
            printf("\n");
        }else{
            printf("CROP IT");
            printf("\n");
        }
    }
    return 0;
}
