#include<stdio.h>
int fact(int);
void main()
{
    int num,fac;
    printf("Enter the number");
    scanf("%d",&num);
    fac=fact(num);
    printf("Factorial of the number %d is %d",num,fac);
}
int fact(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return(n*(fact(n-1)));
}
