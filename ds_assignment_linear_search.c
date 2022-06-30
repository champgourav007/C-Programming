#include<stdio.h>
main()
{
    //DS Assignment Question 2
    int a[100],ran,search,i,pos[100],flag=0,j=0;

    printf("Enter the range of the array:\n");   // enter the range of the array
    scanf("%d",&ran);

    printf("Enter the data into the Array:\n");
    for(i=0;i<ran;i++)
    {
        scanf("%d",&a[i]);                   // input elements of the array
    }

    printf("Enter the element to search into the Array:\n");
    scanf("%d",&search);                    // input the element to be searched

    for(i=0;i<ran;i++)
    {
        if(a[i]==search)
        {
            flag++;
            pos[j] = i+1;        // condition for multiple same element is found at different position
            j++;
        }
    }
    if(flag!=0)
    {
        printf("\n%d is found %d times on the given Array\n",search,j);
        for(i=0;i<j;i++)
        {
            printf("\n%d time on %d position\n",i+1,pos[i]);
        }
    }
    else
        printf("%d is not found",search);
}
