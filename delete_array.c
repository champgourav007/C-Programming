#include<stdio.h>
main()
{
    int ran,a[100],i,ele,count=-1,j,flag;

    printf("Enter the range of an array: \n");  //range of an array
    scanf("%d",&ran);

    printf("Enter the elements of an array: \n");
    for (i=0;i<ran;i++)
    {
        scanf("%d",&a[i]);                       // input for the array
    }

    printf("Array is: \n");
    for (i=0;i<ran;i++)
    {
        printf(" %d ",a[i]);                    //printing of array element
    }

    printf("\nEnter the element to be deleted: \n");
    scanf("%d",&ele);

    for(i=0;i<ran;i++)
    {
        count++;
        if(a[i]==ele)
        {
            for (i=count;i<ran;i++)
            {
                a[i] = a[i+1];                     //condition when the element found
                flag =1 ;
            }
           break;
        }
    }

    if (flag==1)
    {
        printf("New Array is: \n");
        for (j=0;j<i-1;j++)
        {
            printf(" %d ",a[j]);                      //printing of array when element deleted
        }
    }
    else
    {
        printf("No Change in Array\n");
        printf("Array is: \n");
        for (i=0;i<ran;i++)
        {
            printf(" %d ",a[i]);                     //printing of array when element is not deleted
        }
    }

}
