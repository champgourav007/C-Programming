#include<stdio.h>
#include<math.h>
main()
{
    int a,c;
    float b;
    printf("Enter any number for further operation");
    scanf("%d",&a);
    printf("Enter 1 for square root,2 for square,3 for cube,4 for half of the number");
    scanf("%d",&c);
    switch (c)
    {
        case 1:b=sqrt(a);
        printf("square root of %d is %f",a,b);
        break;
        case 2:b=pow(a,2);
        printf("Square of the %d is %f",a,b);
        break;
        case 3:b=pow(a,3);
        printf("Cube of the %d is %f",a,b);
        break;
        case 4:b=a/2;
        printf("Half of the number %d is %f",a,b);
        break;
        default :printf("invalid character");
    }

    }


