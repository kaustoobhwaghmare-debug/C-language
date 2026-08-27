#include<stdio.h>
int main()
{
				int n,i,max=0,min=0,index1,index2,sum1,sum2;
				printf("enter limit: ");
				scanf("%d",&n); 
				int a[n];
				for(i=0; i<n; i++)
				{
					printf("enter eliminat: ");
					scanf("%d",&a[i]);
				}
				min=a[0];
				for(i=0; i<n; i++)
				{
					if(min<a[i])
					{
						index1=i;
						min=a[i];
						sum1=sum1+a[i];
					}
				}
				max=a[0];
				for(i=0; i<n; i++)
				{
					if(max>a[i])
					{
						index2=i;
						max=a[i];
						sum2=sum2+a[i];
					}
				}
				printf("\n min value=%d",a[index1]);
				printf("\n sum2=%d",min);
				printf("\n mix value=%d",a[index2]);
				printf("\n sum1=%d",max);
}
