#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int ran,i,val,check[10000],j,k,flag,rem;
    int arr[100000],temp;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%d",&ran);
    for(i=0;i<ran;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<ran;i++)
    {
        temp = arr[i];
        val=1;
        j=0;
        flag=0;
        while(temp>0)
        {
            rem = temp%10;
            check[rem-1]=rem;
            j++;
            temp/=10;
        }
        for(k=0;k<j;k++)
        {
            printf("---%d---",check[k]);

        }
        for(k=0;k<j;k++)
        {
            if(val==check[k]){
                val++;
                flag++;
            }
            else{
                printf("NO\n");
                flag=0;
                break;
            }

        }
        if(flag>0)
            printf("YES");
    }

    return 0;
}
