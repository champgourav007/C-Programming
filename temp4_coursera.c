#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num_soc, siz_buf, arr[100][100], i, j=0;
    scanf("%d%d",&num_soc,&siz_buf);
    for(i=0;i<num_soc;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    if(siz_buf == 0)
    {
        printf(" ");
    }

}
