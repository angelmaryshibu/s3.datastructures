#include<stdio.h>
#include<stdlib.h>
struct tnode
{
    int data;
    struct tnode *right,*left;
};

struct tnode *createnode(struct tnode *root ,int data)
{ 
    if(root==NULL)
   {
    root=(struct tnode*)malloc(sizeof(struct tnode));
    root->data=NULL;
    root->right=root->left=NULL;
    return root;
   }
   else
   {
       if(root->data>data)
         root->left=createnode(root->left,data);
       else if(root->data<data)
         root->right=createnode(root->right,data);
        else
         printf("numbers cannot be repeated");
        return root; 
   }
    
}

void inorder(struct tnode *root)
{
    if(root!=NULL)
    {
     inorder(root->left);
     printf("%d ",root->data);
     inorder(root->right);
    }
        
}
void postorder(struct tnode *root)
{
     if(root!=NULL)
    {   postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
     
}
 void preorder(struct tnode *root)
{
    if(root!=NULL)
    { printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
    }
    
}
void main()
{   struct tnode *root=NULL;
    int ch,n,ele;
    printf("..........menu.........\n");
    printf("1.createtree\n2.inorder traversal\n3.postorder traversal\n4.preorder traversal\n5.exit");
    while(1)
    {
        printf("\nenter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter number of elements of tree:");
                   scanf("%d",&n);
                   printf("enter the elements of tree:");
                   for(int i=0;i<n;i++)
                   {
                       scanf("%d",&ele);
                       root=createnode(root,ele);
                   }
                   break;
            case 2:if(root==NULL)
                     printf("tree is not created");
                    else
                    {
                        printf("\ninorder traversal:");
                        inorder(root);
                    }
                    break;
            case 3:if(root==NULL)
                     printf("tree is not created");
                    else
                    {
                        printf("\npostorder traversal:");
                        postorder(root);
                    }
                    break;
            case 4:if(root==NULL)
                     printf("tree is not created");
                    else
                    {
                        printf("\npreorder traversal:");
                        preorder(root);
                    }
                    break;
            case 5:exit (0);
        }
    }
}
