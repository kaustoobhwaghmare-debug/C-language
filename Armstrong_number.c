#include<stdio.h>
int main()
{
	int i,n,j,t,r,num,s;
	printf("enter limit: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter elimint: ");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		t=n;
		for(j=0; j<t; j++)
		{
			while(t>0)
			{
				r=t%10;
				s=s+(r*r*r);
				t=t/10;
			}
		}
	}
	printf("number is armstrong=%d",s);
	
}
