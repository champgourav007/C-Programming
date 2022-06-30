#include<stdio.h>
#include<math.h>
main()
{
    int fac,i,j,range,x;
    float sum;
    printf("Enter the range of series: ");
    scanf("%d",&range);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    sum=0;


    for(i=0;i<range;i++)
    {
        fac=1;
        for (j=1;j<=i+1;j++)
        {
            fac=fac*j;
        }
        sum=sum + pow(x,i)/fac;
    }
    printf("%f is the sum of the series: ",sum);
}
