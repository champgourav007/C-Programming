#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,d,e;
    printf("Enter any number for the following operations");
    scanf("%d",&a);
    printf("Enter 1 for square 2 for cube 3 to check it is even or not");
    scanf("%d",&b);
    switch (b)
        {
            case 1: (c=pow(a,2));
            printf("square of a number is %d",c);
            break;
            case 2: d=pow(a,3);
            printf("Cube of a number is %d",d);
            break;
            case 3: e=a%2==0;
            printf("It is even number",e);
            break;


        }
}
