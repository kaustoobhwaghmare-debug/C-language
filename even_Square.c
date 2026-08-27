#include<stdio.h>
void main()
{
	int num,s,q;
	printf("Enter number :");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		s=num*num;
		printf("Number is EVEN \nCalculet Square=%d",s);
	}
	else
	{
		q=num*num*num;
		printf("Number is ODD \nCalculet Qube=%d",q);
	}
	
}
