#include<stdio.h>

int compute(int n){
	if(n==9)
		return 11;
	int res = 0,tmp,base = 1;
	for(tmp = n/10;tmp>0;tmp = tmp/10){
		res = res*10 + tmp % 10;
		base *= 10;
	}
	return n* base + res;
}

int prime(int n){
	int i;
	int flag;
	for(i = 2;i*i<= n;i++){
		flag = 0;
		if(n%i==0){
			flag = 1;
			break;
		}
		
	}
	if(flag == 0){
			printf("%d\n",n);
		}
}

int main(){
	int x,y,temp = 0;
	scanf("%d",&y);
    x = 1;
	
	for(;temp <= y;x++){
		temp = compute(x);
		prime(temp);
	}
}