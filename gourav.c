#include<stdio.h>
main()

{
    int a;
    printf("Enter Any Year");
    scanf("%d",&a);
   if(a%4==0||a%400==0)
   {
       printf("Ths is the leap year");
   }
       else
       {
           printf("This is not a leap year");
       }
   }


