#include<stdio.h>
#include<math.h>
main()
{
    int x1,x2,y1,y2,distance,x,y;
    printf("Enter the coordinates of the points");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    x=x2-x1;
    y=y2-y1;
    distance=pow((x*x+y*y),1/2);
    printf("%d is the distance",distance);
}
