#include<stdio.h>
void main()
{
	int i,n;
	printf("enter numbber:");
	scanf("%d",&n);
	printf("even numbber:\n");
    for(i=1; i<=n; i++)
    {
	   if(i%2==0)
      printf("%d\n",i);
    }
}
