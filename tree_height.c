#include<stdio.h>


int main()
{
    int flag=0,i,j,length=0,range;
    int str[100000],check;

    scanf("%d",&range);

    for(i=0;i<range;i++)
    {
        scanf("%d",&str[i]);
    }
    i=0;
    while(i<range)
    {
        if(str[i]== -1)
        {
            length++;
            str[i] =0;
            break;
        }
        i++;
    }

    i=0;

    while(i<range)
    {
        flag =0;
        check = str[i];

        if(check==0)
        {
            i++;
            check = str[i];
        }

        while(i<range)
        {
            if(str[i]==check)
            {
                if(flag =0)
                {
                    length++;
                }
                str[i]=0;
                flag = 1;
            }

            if(str[i]==0)
            {
                i++;
            }
        }

    }

    printf("%d",length);


}
