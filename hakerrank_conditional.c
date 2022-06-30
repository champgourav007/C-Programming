#include<stdio.h>

int main()
{
    int val;

    scanf("%d",&val);

    if(val>=1&&val<=9)
    {
        if(val==1){
            printf("one");
        }
        else if(val==2){
            printf("two");
        }
        else if(val==3){
            printf("three");
        }
        else if(val==4){
            printf("four");
        }
        else if(val==5){
            printf("five");
        }
        else if(val==6){
            printf("six");
        }
        else if(val==7){
            printf("seven");
        }
        else if(val==8){
            printf("eight");
        }
        else if(val==9){
            printf("nine");
        }
    }

    else{
        printf("Greater than 9");
    }
}
