#include<stdio.h>
void main()
{
	char ch;
	printf("Enter charecter :");
	scanf("%c",&ch);
	
	if(ch>=0 && ch<=9)
	{
		printf("Shi is Digit.");
	}
	else
	{
		printf("Shi is Charecter.");
		
	}
	
}
