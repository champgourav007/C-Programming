#include<stdio.h>
int main()
{
    int f,e,n,a[10],i,sec,j,mid,flag=0;
    printf("Enter the range of an array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the search elements");
    scanf("%d",&sec);
    f=0;
    e=n-1;
    while (f<=e)
    {
        mid=(f+e)/2;
        if (sec==a[mid])
        {
            printf("Element is found: %d ",a[mid]);
            flag=1;
            break;
        }
        else if (sec<a[mid])
        {
            e=mid-1;
        }
        else if (sec>a[mid])
        {
            f=mid+1;
        }
    }
    if (flag==0)
        printf("Element is not found");
}
