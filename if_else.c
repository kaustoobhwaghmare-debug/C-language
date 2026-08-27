#include<stdio.h>
void main()
{
	int per;
	char gread;
	printf("Enter persentage :");
	scnaf("%d",&per);
	
	if(per>=35 && per<=45)
	{
	   gread='d';
    }
	else if(per>=45 && per<=55)
	{
	   gread='c';
    }
	else if(per>=55 && per<=65)	
	{
       gread='e';
    }
	else if(per>=65 && per<=75)
	{   
	   gread='b';
    }
	else if(per>=75 && per<=85)
    {
	   gread='a'; 
    }
	else if(per>=85 && per<=95)
	{
	   gread='o';
    }
	else if(per>=95 && per<=100)
	{
	   gread='t';
    }
	else
	{
	   gread='f'; 
    }
	
	printf("persenteage=%c",gread);                    
	
}
