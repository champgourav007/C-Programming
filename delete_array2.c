#include<stdio.h>
main()
{
    int a[100],ran,i,j,flag=0,count=0,ele;
    printf("Enter the range of the array:\n");
    scanf("%d",&ran);

    printf("Enter the data of array:\n");
    for (i=0;i<ran;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n***************************ARRAY***********************\n");
    for(i=0;i<ran;i++)
    {
        printf("  %d  ",a[i]);
    }

    printf("\nEnter the element to be deleted:\n");
    scanf("%d",&ele);

    for(i=0;i<ran;i++)
    {
        if(a[i]==ele)
        {
            for(j=i;j<ran-flag-count;j++)
            {
                a[j]=a[j+1];
            }
            flag++;
        }
        else
        {
            count++;
            continue;
        }
    }
    printf("%d",flag);
    if (flag!=0)
    {
        printf("\n***********************NEW ARRAY***********************\n");
        for(i=0;i<(ran-flag);i++)
        {
            printf("  %d  ",a[i]);
        }
    }
    else
    {
        printf("\n                        NO CHANGE                          \n");
        printf("\n*************************NEW ARRAY*************************\n");
        for (i=0;i<ran;i++)
        {
            printf("  %d  ",a[i]);
        }
    }

}
