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
	printf("���ǵ����Լ����:%d\n",n);
	printf("���ǵ���С��������:%d\n",p/n);
	return 0;
}
