#include<stdio.h>
int sum(int);
main()
{
	int num,y;
	printf("Input number:");
	scanf("%d",&num);
	y=sum(num);
	printf("\nSum of digits:%d",y);
}
int sum(int x)
{
	int s=0;
	if(x==0)
	{
		return 0;
	}
	s = x%10 + sum(x/10);
	return s;
}
