#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *ptr;
struct node *header=NULL;
int insert()
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("no space");
        return 0;
    }
    printf("enter the data to be inserted");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(header==NULL)
    {
        header=temp;
        return 0;
    }
    ptr=header;
    while(ptr->link!=NULL)
      ptr=ptr->link;
    ptr->link=temp;
    return 0;
}

int display()
{
    if(header==NULL)
    {
        printf("the linked list is empty");
        return 0;
    }
    ptr=header;
    printf("the linked list is:");
    while(ptr!=NULL)
    {
        printf("%d,",ptr->data);
        ptr=ptr->link;
    }
}

void main()
{
    int n;
    printf(".......MENU......\n");
    printf("1.insert\n2.display\n3.exit");
    while(1)
    {
        printf("\nenter your choice :");
        scanf("%d",&n);
        switch(n)
        {
            case 1:insert();
                   break;
            case 2:display();
                   break;
            case 3:exit(0);
        }
    }
    
    
}
