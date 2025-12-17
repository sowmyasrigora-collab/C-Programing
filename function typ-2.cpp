#include<stdio.h>
int addition();
int main()
{
	int result;
	result=addition();
	return 0;
}
int addition ()
{
	int a,b,c;
	printf("\n enter a and b values");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
