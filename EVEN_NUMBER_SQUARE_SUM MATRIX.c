#include<stdio.h>
int main()
{
	int i,j,r,c,s=0,q;
	printf("Enter row and colum :");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter martix :");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(a[i][j]%2==0)
			{
				printf("even=%d\n",a[i][j]);
			    q=a[i][j]*a[i][j];
			    s=s+q;
			    printf("square=%d\n",q);
			}
		}
	}
	printf("sum even matrix=%d",s);
}
