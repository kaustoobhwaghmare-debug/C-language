#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter limit :");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0; i<n; i++)
	  {
	  	printf("enter element :");
	  	scanf("%d",&a[i]);
	  }
	for(i=0; i<n; i++)
	  {
	  	printf("enter element :");
	  	scanf("%d",&b[i]);
	  } 
	for(i=0; i<n; i++)
	  {
	  	sum=0;
	  	sum=a[i]+b[i];
	  	printf("\t%d",sum);
	  }   
}
