#include<stdio.h>
main()
{
    char b;
    int a,d,f,h,j;
    float c,g,i,e;
    printf("Enter Your Salary");
    scanf("%d",&a);
    printf("Enter your gender");
    scanf(" %c",&b);


    if (b==70||b==112)
    {
        if (a<10000)
        {
        c=0.05*a+0.02*a;
        d=c+a;
        printf("your bonus is %d",c);
        printf("Your payable salary is %d",d);
        }
        else if (a>10000)
            e=0.05*a;
            f=a+e;
        printf("Your Bonus is %f",e);
        printf("Your Payable salary is %d",f);
    }
        if (b==71||b==113)
        {
            if(a>10000)
            {
            g=0.1*a+0.02*a;
            h=g+a;
            printf("Your Bonus is %f",g);
            printf("Your Payable Salary is %d",h);
            }
            else if (a>10000)
            {
            i=0.1*a;
            j=a+i;
            printf("Your Bonus is %f",i);
            printf("Your payable amount is  %d",j);
            }

    }
}
