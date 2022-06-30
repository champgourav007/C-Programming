#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int ran,i,j,array[100][100],temp;

    scanf("%d",&ran);

    for(i=0;i<ran;i++)
    {
        for(j=0;j<ran;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    for (i=0; i<ran; i++)
    {
        for (j=0; j<ran; j++)
        {
            if(array[i][j] > array[i][j+1])
            {
                temp = array[i][j];
                array[i][j] = array[i][j+1];
                array[i][j+1] = temp;
            }
        }
        }
    for(i=0;i<ran;i++)
    {
        for(j=0;j<ran;j++)
        {
            printf("%d",array[i][j]);
        }
    }
    return 0;
}
