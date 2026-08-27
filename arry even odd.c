#include<stdio.h>
void main()
{
	int a[50][50],b[50][50],c[50][50],i,j,row,col; 
	
	printf("Enter how many rows :");
	scanf("%d",&row);
	printf("Enter how many cols :");
	scanf("%d",&col);
	printf("Enter first matrix :\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nEVEN NUMBERS =\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(a[i][j]%2==0 && b[i][j]%2==0)
			{
				printf("\n %d \t %d",a[i][j],b[i][j]);
				
			}
		}
		
	}
	printf("\nODD NUMBERS =\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(a[i][j]%2==1 && b[i][j]%2==1)
			{
				printf("\n %d \t %d",a[i][j],b[i][j]);
				
			}
		}	
	}

}
