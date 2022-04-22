#include <stdio.h>

int main()
{
    int i,n,key,a[i];
    printf("enter the number of elements to be inserted");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("element found at %d",i+1);
            break;
        }
    }

    return 0;
}
