#include<stdio.h>
void main()
{
	int a,b,sk;
	printf("enter number:");
	scanf("%i",&a);
	printf("enter second value:");
	scanf("%i",&b);
	sk=a;
	a=b;
	b=sk;
	printf("swapping value:%i",a);
	printf("\nswapping value:%i",b);
}
