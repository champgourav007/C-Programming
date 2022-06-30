#include<stdio.h>
main()
{
    // DS Lab Assignment Question 1
    int a[100],i,pos,ran,flag=0,ele,posi,j;

    printf("Enter the range of the array:\n");      //range of the array
    scanf("%d",&ran);

    printf("Enter %d elements in the array:\n",ran);
    for(i=0;i<ran;i++)
    {
        printf("Enter %d element:",i+1);                // enter the elements of the array
        scanf("%d",&a[i]);
    }

    printf("\n************************************ARRAY*******************************\n");
    for(i=0;i<ran;i++)
    {
        printf(" %d ",a[i]);                   // printing the elements of the array
    }

    printf("\nEnter the position to delete the element at that position:\n");
    scanf("%d",&pos);

    for(i=pos-1;i<ran;i++)
    {
        a[i] = a[i+1];
        flag=1;                      // condition to delete the element
    }
    if(flag ==1)
    {
        printf("\n***************************NEW ARRAY*****************************\n");
        for(i=0;i<ran-1;i++)
        {
            printf(" %d ",a[i]);       // printing the new array
        }
        ran = ran-1;
    }
    else
    {
        printf("\nElement is not found at that position\n");
        printf("*******************************ARRAY*******************************\n");
        for (i=0;i<ran;i++)
        {
            printf(" %d ",a[i]);         // printing old array
        }
        ran = ran;
    }

    printf("\nEnter the Element to Insert into the Array:\n");
    scanf("%d",&ele);

   a[ran] = ele;
   printf("\n*******************************NEW ARRAY**********************************\n");
   for(i=0;i<ran+1;i++)
   {
       printf(" %d ",a[i]);
   }

}
