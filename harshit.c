#include<stdio.h>
#include<math.h>
main()
{
  int a,b,sum,sub,div,multy,n;
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number: ");
  scanf("%d",&b);
  printf("To sum press 1 to subtract press 2 to divide press 3 to multiply press 4:");
  scanf("%d",&n);
  if (n == 1)
  {
    sum= a+ b;
    printf("Answer is : %d",sum);
  }
  if (n==2)
  {
      sub = a-b;
      printf("Answer is : %d",sub);

  }
  if (n==3)
  {
      div = a/b;
      printf("Answer is: %d",div);

  }
  if (n==4)
  {
    multy = a*b;
    printf("Answer is : %d",multy);

  }
}

