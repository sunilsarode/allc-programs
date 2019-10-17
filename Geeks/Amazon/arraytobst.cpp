#include<bits/stdc++.h>

using namespace std;
struct Node{
   int data;
   Node* left;
   Node* right;
};

Node* create(int data){
   Node* newn=(struct Node*)malloc(sizeof(struct Node));
   newn->left=NULL;
   newn->right=NULL;
   newn->data=data;
}
Node* atb(int a[],int l,int r){
   
   if(l>r){
      return NULL;
   }
   int mid=l+(r-l)/2;
   Node* newn=create(a[mid]);

   newn->left=atb(a,l,mid-1);
   newn->right=atb(a,mid+1,r);

   return newn;
}
void ino(Node* root){

  if(root==NULL){
     return;
  }

  ino(root->left);
  cout<<root->data<<" ";
  ino(root->right);
}
void pre(Node* root){
   if(root==NULL){
       return;
   }
   cout<<root->data<<" ";
   pre(root->left);
   pre(root->right);
}
int main(){
int t=0;
cin>>t;
while(t--){
  int n=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
     cin>>arr[i];
  }
  
  Node* root=atb(arr,0,n-1);
  //ino(root);
  pre(root);
  cout<<endl;
} 
return 0;
}
