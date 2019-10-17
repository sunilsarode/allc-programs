#include<stdio.h>
#include<stdlib.h>
struct Node* insertInTree(struct Node *root,int val);
int heightOfTree(struct Node *root);
struct Node
{
    int data;
    struct Node * left,*right;
};
int main()
{
    int n=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    struct Node *root=NULL;
    for(int i=0; i<n; i++)
    {
        root=insertInTree(root,array[i]);
    }
    int height=heightOfTree(root);
    printf("%d",height);
    return 0;

}

struct Node* insertInTree(struct Node *root,int val)
{
    if(!root)
    {

        root=(struct Node *)malloc(sizeof(struct Node));
        root->left=NULL;
        root->right=NULL;
        root->data=val;

        return root;
    }
    else
    {
        if(val<=root->data)
        {
            root->left=insertInTree(root->left,val);
        }
        else
        {
            root->right=insertInTree(root->right,val);
        }
        return root;
    }


}
int heightOfTree(struct Node *root)
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


