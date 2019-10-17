#include<bits/stdc++.h>
using namespace std;
struct node * create(char val);
struct node{
  char val;
  struct node* left;
  struct node* right; 
};

struct node * create(char val){

   struct node * x=(struct node *)malloc(sizeof(struct node));
   x->left=NULL;
   x->right=NULL;
   x->val=val;
   return x;
}

int main(){

  struct node* root=create('A');
  cout<<root->val<<endl;
 
return 0;
}

