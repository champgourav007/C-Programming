#include<stdio.h>
#include<string.h>
main(){
	int n,i;
	char ans;
	do{
		printf("Enter a number : ");
		scanf("%d",&n);
		
		for(i=1;i<=10;i++)
			printf("%d x %d = %d\n",n,i,n*i);
			
		printf("More Tables [Y/N] ? ");
		ans=getchar();
	}while(ans=='y' || ans=='Y');
}