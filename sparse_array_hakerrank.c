#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int arr[20],i,str_ran,que_ran,k,inc,comp;
    char str[1000],que[1000],str_val,que_val;
    scanf("%d",&str_ran);


    for(i=0;i<str_ran;i++)
        scanf("%c",&str[i]);

    printf("\n1\n");
    scanf("%d",&que_ran);

    printf("\n2\n");

    for(i=0;i<que_ran;i++)
        scanf("%c",&que[i]);

    printf("3");
    for(k=0;k<que_ran;k++)
    {
        que_val = que[k];
        inc=0;

        for(i=0;i<str_ran;i++)
        {
            str_val = str[i];

            comp = strcmp(que_val,str_val);
            if(comp==0)
            {
                inc++;
            }
        }
        arr[k]=inc;

    }

    for(i=0;i<k;i++)
        printf("%d",arr[i]);
}
