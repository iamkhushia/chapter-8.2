#include<stdio.h>

main()
{
	// Write a Program to find leap years between two given numbers and store them in an array. And then print that array.

	int first_year,end_year,i;
	
	printf("enter the first_year year=");
	scanf("%d",&first_year);
	
	printf("enter the end_year year=");
	scanf("%d",&end_year);
	
	printf("leap year betwwen %d and %d=\n",first_year,end_year);
    
    for(i=first_year; i<=end_year; i++)
    {
    	if((i%4==0) && (i%100!=0) || (i%400==0))
    	{
    		printf("the array are=%d\n",i);
		}
    }
}