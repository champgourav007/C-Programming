#include<stdio.h>
main()
{
    int a,b;
    printf("Enter any number to determine it is even or odd\n");
    scanf("%d",&a);
    b=a%2==0;
    switch (b)
    {
        case 1:printf("%d is even",a);
        break;
        default :printf("%d is odd",a);
    }
}
