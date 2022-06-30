#include<stdio.h>
#include<math.h>
main()
{
    double x,val;
    printf("Enter the angle: ");
    scanf("%lf",&x);
    if (x >= 0 && x <= 1)
    {
        val = sin(x);
        printf("%lf",val);
    }
    else
        printf("Wrong input please input between 0-1");

}
