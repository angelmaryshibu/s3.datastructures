#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node *createnode(int data)
{
    struct node *new = malloc(sizeof(struct node));
    new->data=data;
    new->right=NULL;
    new->left=NULL;
    return new;
}
struct node *insertatleft(struct node *root,int data)
{
    root->left=createnode(data);
    return root->left;
}
struct node *insertatright(struct node *root,int data)
{
    root->right=createnode(data);
    return root->right;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
     inorder(root->left);
     printf("%d ",root->data);
     inorder(root->right);
    }
        
}
void postorder(struct node *root)
{
     if(root!=NULL)
    {   postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
     
}
 void preorder(struct node *root)
{
    if(root!=NULL)
    { printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
    }
    
}
void main()
{
    struct node *root=createnode(2);
    insertatleft(root,3);
    insertatright(root,4);
    insertatleft(root->left,5);
    insertatright(root->left,6);
    printf("inorder traversal:");
    inorder(root);
    printf("\n preorder traversal: ");
    preorder(root);
    printf("\n postorder traversal:");
    postorder(root);
}
