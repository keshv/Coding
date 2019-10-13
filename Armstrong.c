#include<stdio.h>
int main()
{
	int d,n,sum=0,copy;
	printf("Enter a Number \n");
	scanf("%d",&n);
	copy=n;
	while(n>0)
	{
		d=n%10;
		sum+=d*d*d;
		n/=10;
	}
	if(sum==copy)
		printf("Armstrong Number");
	else
		printf("Consonant");
	return 0;
}

