#include<stdio.h>
#include<string.h>

int main()
{
    int str[100000];
    int count=0,n,i,j,st;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
    }
    for(i=0;i<n;i++)
    {
        if(str[i]==(-1))
        {
            st = i;
            count++;
            break;
        }
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(str[i]==j)
            {
                if(j==st&&st==(n-1))
                {
                    break;
                }
                count++;
                break;
            }

        }
    }

    printf("%d",count);
}
