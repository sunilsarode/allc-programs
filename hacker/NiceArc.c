#include<stdio.h>
#include<string.h>
char getStackTop();
void pushInStack(char val);
void popFromStack();
int isEmpty();
char stack[100000];
int stackTop=-1;
int main() {

    int m=0;
    scanf("%d",&m);
    int count=0;
    while(m-->0) {
        stackTop=-1;
        for(int i=0; i<100000; i++) {
            stack[i]=0;
        }

        char arr[100000];
        scanf("%s",arr);
        for(int i=0; i<strlen(arr); i++) {
           // printf("%c",arr[i]);

            if(arr[i]=='A'&&getStackTop()=='A') {
                popFromStack();
            } else if(arr[i]=='B'&&getStackTop()=='B') {
                popFromStack();

            } else {
                pushInStack(arr[i]);
            }


        }
        if(isEmpty()) {
           count++;
        }
    }
    printf("%d",count);

    return 0;

}        
        
       
        void pushInStack(char val) {

            if(stackTop==100000) {
                return;
            } else {
                stack[++stackTop]=val;
            }

        }
        void popFromStack() {
            if(stackTop==-1) {
                return;
            } else {
              //  int val=stack[stackTop];
                --stackTop;
            }

        }

        char getStackTop() {
			if(stackTop==-1){
				return 0;
			}
				
            return stack[stackTop];
        }

		int isEmpty(){
			if(stackTop==-1)
			 return 1;
			 else
			 return 0;
				
		}
