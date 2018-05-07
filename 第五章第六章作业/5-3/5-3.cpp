#include<stdio.h>
int main()
{
	int p;
	int r;
	int n;
	int m;
	int temp;
	printf("please input the first number n:\n");
	scanf("%d",&n);
	printf("please input the second number m:\n");
	scanf("%d",&m);
	if(n<m)
	{
		temp=n;
		n=m;
		m=temp;
	}
	p=n*m;
	while(m!=0)
	{
		r=n%m;
		n=m;
		m=r;
	}
	printf("它们的最大公约数是:%d\n",n);
	printf("它们的最小公倍数是:%d\n",p/n);
	return 0;
}
