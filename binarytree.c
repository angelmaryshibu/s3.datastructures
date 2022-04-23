#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *llink;
    struct node *rlink;
};
struct node *ptr,*root=NULL;
struct node *createnode()
{   struct node *new=malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("no space");
        return 0;
    }
    printf("enter the data to be inserted");
    scanf("%d",&new->data);
    new->rlink=new->llink=NULL;
    return new;
}
int insertatright(struct node *ptr)
{
    struct node *temp;
    temp=createnode();
    ptr->rlink=temp;
    return 0;
    
}
int insertatleft(struct node *ptr)
{
    struct node *temp;
    temp=createnode();
    ptr->llink=temp;
    return 0;
    
}
int inorder(struct node *root)
{
   
    inorder(root->llink);
    printf("%d ",root->data);
    inorder(root->rlink);
    return 0;
}
int postorder(struct node *root)
{
    
    postorder(root->llink);
    postorder(root->rlink);
     printf("%d ",root->data);
     return 0;
}
 int preorder(struct node *root)
{
   
    printf("%d ",root->data);
    postorder(root->llink);
    postorder(root->rlink);
    return 0;
}
void main()
{
    root=createnode();
    insertatleft(root);
    insertatright(root);
    insertatleft(root->llink);
    insertatright(root->llink);
    insertatright(root->rlink);
    insertatleft(root->rlink);
    printf("inorder traversal");
    inorder(root);
    printf("preorder traversal");
    preorder(root);
    printf("postorder traversal");
    postorder(root);
}
