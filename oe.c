#include <stdio.h>

int main(void) {
    int ran,k,s,i,arr[100],sum,j,temp,pr,flag=0,per;
	scanf("%d %d %d",&ran,&k,&s);
	for(i=0;i<ran;i++)
	{
	    scanf("%d",&arr[i]);
	}
	sum =0;
	for(i=0;i<ran-1;i++)
	{
	    sum = sum+arr[i];
	}
	pr = 0;
	for(i=0;i<ran-1;i++)
	{
	    temp = arr[i];

	    for(j=1;j<=temp;j++)
	    {

	        if(temp%j==0)
	        {
	            flag++;

	        }
	    }

	    if(flag==2)
	    {
	        pr++;
	    }
	    flag =0;

	}


	per = sum*(k-(pr*s));
	printf("%d",per);
}

