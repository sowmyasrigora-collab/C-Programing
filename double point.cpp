#include<stdio.h>
int main()
{
	int a=10;
	int *ptr= &a;
	int **dptr;
	dptr= &ptr;
	printf("\n the value of a%d",a);
	printf("\n the address of a%x",&a);
	printf("\n the value of ptr%x",ptr);
	printf("\n the adderss of ptr%x",&ptr);
	printf("\n the value of dpt%x",dptr);
	printf("\n the address of dpt%x",&dptr);
	printf("\n the ptr pointing value %d",ptr);
	printf("\n the dpt pointing value %d",dptr);
	printf("\n %d",*(&a));
	return 0;
}
