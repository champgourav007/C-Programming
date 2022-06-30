#include<stdio.h>

int main()
{
    float current_bal, rem_bal,val;
    int wd_bal;
    scanf("%d %f",&wd_bal,&current_bal);

    if(current_bal<wd_bal)
        printf("Insufficient Funds\n");
    else if(current_bal>=wd_bal && current_bal>= (wd_bal + 0.50)){
        if(wd_bal%5 == 0){
            val = current_bal - wd_bal;
            rem_bal = val - 0.50;
            printf("%.2f",rem_bal);
        }
        else
            printf("Incorrect Withdrawal Amount\n");
    }
}
