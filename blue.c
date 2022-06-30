#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter the age of anjali aditi and aadil");
    scanf("%d %d %d",&a,&b,&c);
    a<b&&a<c?printf("Anjali is youngest"):b<a&&b<c?printf("Aditi is youngest"):printf("aadil is youngest");
}
