#include<stdio.h>
void main()
{
	char ch[50];
	int i;
	printf("enter string :");
	gets(ch);
	for(i=0; ch[i]>'\0'; i++)
	  {
	  	 if(ch[i]==' ')
	  	    ch[i]='*';
	  }
      puts(ch);
}
