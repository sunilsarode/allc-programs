#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node * createNode();
int heightOfTree(struct node *root);
int diameter(struct node *root);
int max(int a,int b);
struct node *root=NULL;

struct node{
	
	int data;
	struct node *left,* right;
	
};
int main(){
	int t=0,x=0,val=0;
	char arr[100];
	
	
	scanf("%d %d",&t,&x);
	
	
	root=(struct node *)malloc(sizeof(struct node));
		root->left=NULL;
		root->right=NULL;
		root->data=x;
	
	
	for(int i=0;i<t-1;i++){
		scanf("%s",arr);
		scanf("%d",&val);
		
		while(arr[i]!='L' ||arr[i]!='R'){
			
			if(arr[i]=='L'){
				root->left=createNode();
			}else{
				
			}
			i++;
			
		}
		
		root=insertIn(val,root,arr,0);
	}
	
	
	printf("%d\n",diameter(root));
	return 0;
}

int diameter(struct node *root){
	
	if(!root){
		return 0;
	}
	int leftHeight=heightOfTree(root->left);
	int rightHeight=heightOfTree(root->right);
	
	int leftDiameter=diameter(root->left);
	int rightDiameter=diameter(root->right);
	
	return max(1+leftHeight+rightHeight,max(leftDiameter,rightDiameter));
	
}

int max(int a,int b){
	return a>b?a:b;
}
struct node * createNode(){
		
		root=(struct node *)malloc(sizeof(struct node));
		root->left=NULL;
		root->right=NULL;
		root->data=data;
	
	return root;
	
}
struct node * insertIn(int data,struct node *root,char arr[],int i){
	
	if(!root){
		
		root=(struct node *)malloc(sizeof(struct node));
		root->left=NULL;
		root->right=NULL;
		root->data=data;
		
		return root;
	}else if(arr[i]=='L'){
		
		root->left=insertIn(data,root->left,arr,i+1);
	}else if(arr[i]=='R'){
		root->right=insertIn(data,root->right,arr,i+1);
	}
	
	return root;
	
}
int heightOfTree(struct node *root)
{
    if(!root)
        return 0;
    if(!root->left&&!root->right)
    {
        return 1;
    }
    int l=0,r=0;
    l=heightOfTree(root->left);
    r=heightOfTree(root->right);
    return 1+(l>r?l:r);
}
