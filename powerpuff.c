#include<stdio.h>
int main()
{
    int ing, tot_ing[10], req_ing[10],nem[10], temp,i,j,count,min;
    printf("Enter the totat number of ingredients present in the lab\n");
    printf("--------------------*****************---------------------------");
    scanf("%d",&ing);
    temp=ing;
    i=0;
    count=0;
    j=0;
    printf("Enter the required ingredients to make an powerpuff girl\n");
    printf("---------------------******************--------------------------");
    while(ing > 0)
    {
        scanf("%d",&req_ing[i]);
        count+=1;
        i++;
        ing--;
    }
    printf("Enter the total quantity of of the ingrdients\n");
    printf("---------------------******************--------------------------");
    while (temp > 0)
    {
        scanf("%d",&tot_ing[j]);
        j++;
        temp--;
    }
    for (i=0;i<count;i++)
    {
       nem[i] = tot_ing[i] / req_ing[i];
    }
    min=nem[0];
    for (i=0;i<count;i++)
    {
        if (min>nem[i])
        {
            min=nem[i];
        }
    }
    printf("%d",min);

}
