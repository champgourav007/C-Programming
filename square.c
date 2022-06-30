#include<stdio.h>
#include<math.h>
main()
{
    float num,square,cube;
    float squareroot,cuberoot;
    int range;
    printf("Enter any number:");
    scanf("%f",&num);
    printf("Enter 1 for square and 2 for cube and 3 for square root:");
    scanf("%d",&range);
    switch (range)
    {
        case 1 : square= pow(num,2);
        printf("%f is the square of a number",square);
        break;
        case 2 : cube= pow(num,3);
        printf("%f is the cube of a number",cube);
        break;
        case 3 : squareroot= sqrt(num);

        printf("%f is the square root of a number",squareroot);
        break;
       default : printf("wrong input");
    }
}
