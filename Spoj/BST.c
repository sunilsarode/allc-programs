#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *left;
 struct node *right;
};
long long count=0;
struct node* head=NULL;
struct node*  add(int v,struct node*root);
struct node* createNode(int v);
void inO(struct node *root);
int main(){
 struct node *root=NULL;
 int n,v;
 scanf("%d",&n);

 for(int i=0;i<n;i++){
    scanf("%d",&v);
   if(i==0){
       root=createNode(v);
       printf("%lld\n",count);
    }else{
       root=add(v,root);
       printf("%lld\n",count);
    }
 }
 //inO(root);
 
return 0;
}
void inO(struct node *root){
   
 
  if(root!=NULL){
     inO(root->left);
     printf("%d",root->data); 
     inO(root->right); 
  }
  

} 
struct node* add(int v,struct node *root){
   count++;
    
   if(v<(root->data)){
       if(root->left==NULL){
            root->left=createNode(v);
        }
       else
         root->left=add(v,root->left);
    }else{
       if(root->right==NULL){
          root->right=createNode(v);
       }else
         root->right=add(v,root->right);
        
    }
  
    return root;
}
struct node* createNode(int v){

       struct node*root=(struct node *)malloc(sizeof(struct node));
       root->data=v;
       root->left=NULL;
       root->right=NULL;
       return root;
}
