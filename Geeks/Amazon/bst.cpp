#include<bits/stdc++.h>
using namespace std;

struct node{

 int data;
 struct node * left,*right;
};

struct node* newNode(int data){
   struct node* temp=new node;
   temp->right=NULL;
   temp->left=NULL;
   temp->data=data;

   return  temp; 
}
void inorder(struct node* root){
   if(root!=NULL){
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
  }
 
}
/**insert**/
struct node *insert(struct node* root,int data){
  
   if(root==NULL){
      return newNode(data);
   } 
   if(root->data<data){
       root->right=insert(root->right,data);
    }else if(root->data>data){
      root->left=insert(root->left,data);
    }
   return root;
 
}
/**lca**/
struct node* lca(struct node* root,int n1,int n2){
 
   if(n1<root->data &&n2<root->data)
       return lca(root->left,n1,n2);
   if(n1>root->data&n2>root->data)
       return lca(root->right,n1,n2);

  return root;

}

/**height**/

int height(struct node *root){

 if(root==NULL){
     return 0;
 }
 int left=height(root->left);
 int right=height(root->right);
 return 1+(left>right?left:right);
}

void printLevel(struct node * root,int level){

   if(root==NULL)
       return;

   if(level==1){
      cout<<root->data<<" ";
   }else{
      printLevel(root->left,level-1);
      printLevel(root->right,level-1);
   }
}

/*level order*/
void levelOrder(struct node *root){

  int h=height(root);
  for(int i=1;i<=h;i++){
     printLevel(root,i);
  }
}


int main(){

int t;
cin>>t;

while(t--){
   
  int n;
  cin>>n;
  int x;
  struct node* root=NULL;
    
 for(int i=0;i<n;i++){
    cin>>x;
    root=insert(root,x);
 }   
  inorder(root); 
  cout<<endl;
  cout<<lca(root,2,4)->data<<endl;
  cout<<"height of tree "<<height(root)<<endl;
  levelOrder(root);
}
return 0;
}
