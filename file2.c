#include<stdio.h>
main()
//grade of student
{
    int m,p,c,e,b,s,per;
    printf("Enter marks of five subjects");
    scanf("%d%d%d%d%d",&m,&p,&c,&e,&b);
    s=m+b+c+e+p;
    per=s/5;
    if (per<=100&&per>=91)
        printf("A");
        if (per<=90&&per>=81)
        printf("B");
    if (per<=80&&per>=60)
        printf("C");
    if (per<=59)
        printf("D");
}
