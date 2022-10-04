#include<stdio.h>

int main()
{
	int num,i,reverse=0,rem;
	printf("enter the number:");
	scanf("%d",&num);
	for(;num!=0;num=num/10)
	{
		rem=num%10;
		reverse=reverse*10+rem;
	}
	printf("reverse of the given number is %d",reverse);
	return 0;
	
}
