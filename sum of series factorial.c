#include<stdio.h>
#include<math.h>
main()
{
        int i,j,x,n,a,b;
        printf("Enter value of x and n");
        scanf("%d%d",&x,&n);
        for (i=1;i<=n;i++)
        {
            b=1;
            a=0;
            for(j=1;j<=i;j++)
            {
                b=b*j;
                a=a+pow(x,i)/b;
            }
        }
        printf("series is %d",a);

}
