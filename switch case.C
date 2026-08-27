#include<stdio.h>
#include<conio.h>
void main()
{
   float a,c,v,r,h;
   int ch;
   clrscr();
   printf("Enter number :");
   scanf("%f",&r);
   printf("Enter area of circle :");
   printf("\nEnter circumference of circle :");
   printf("\nEnter volumev of sphere :");
   printf("\nEnter your choea :");
   scanf("%d",&ch);

   switch(ch)
   {
     case 1:
     {
	a=3.14*r*r;
	printf("%f",a);
	break;
     }
     case 2:
     {
       c=2*3.14*r;
       printf("%f",c);
       break;
     }
    case 3:
     {
     printf("Enter hait :");
     scanf("%f",&h);
       v=3.14*r*r*h;
       printf("%f",v);
       break;
     }
   }

   getch();
}
