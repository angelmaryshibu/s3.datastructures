#include<stdio.h>
void main()
{
    int i,n,l,u,mid,a[10],key;
    printf("enter the number of elements to be inserted");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&key);
    l=0;
    u=n-1;
    while(l<u)
    {
        mid=l+u/2;
        if(a[mid]==key)
           break;
        else if(a[mid]>key)
           u=mid-1;
        else
          l=mid+1;
    }
    if(l>u)
     printf("the element not found");
    else
     printf("element found at %d",mid+1);
}
