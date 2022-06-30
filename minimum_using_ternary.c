#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    a < b ? (a < c ? printf("%d",a) : printf("%d",c)) : (b < c ? printf("%d",b) : printf("%d",c));
    printf("\n");
}