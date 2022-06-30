#include<stdio.h>

int main()
{
    int i,j;
    int tot_samp, tot_ran,count;
    int samp_size[1000],ran_min[1000],ran_max[1000];
    int arr[1000];
    printf("Enter total number of samples: ");
    scanf("%d",&tot_samp);

    printf("Enter total number of range of the samples: ");
    scanf("%d",&tot_ran);

    printf("Enter sample size: \n");

    for(i=0;i<tot_samp;i++)
    {
        scanf("%d",&samp_size[i]);
    }

    printf("Enter the ranges: \n");
    for(i=0;i<tot_ran;i++)
    {
        scanf("%d %d",&ran_min[i],&ran_max[i]);
    }

    for(i=0;i<tot_ran;i++)
    {
        count =0;
        for(j=0;j<tot_samp;j++)
        {
            if(ran_min[i]<=samp_size[j]&&ran_max[i]>=samp_size[j])
            {
                count++;
            }
        }
        arr[i] = count;
    }

    for(i=0;i<tot_ran;i++)
    {
        printf("%d ",arr[i]);
    }
}
