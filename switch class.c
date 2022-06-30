#include<stdio.h>
#include<math.h>
main()
{
    int  a,n,b,c,d,e,f=n,g=0,h,i;
    printf("Enter any number");
    scanf("%d",&n);
    printf("Press 1 for square 2 for cube 3 for check the number is even 4 for it is armstrong");
    scanf("%d",&a);
    switch (a)
    {
        case 1: b=pow(n,2);
                printf("The square is %d",b);
                break;
        case 2: c=pow(n,3);
                printf("The cube is %d",c);
                break;
        case 3: n%2==0;
        printf("%d It is even",n);
                break;
    }

}
