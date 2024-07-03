#include<stdio.h>

main()
{
	float f,c;
	printf("Enter the temperature in Celsius=");
	scanf("%f",&c);
	f=(1.8*c)+32;
	printf("The temperature in fahrenheit is=%.2f",f);
}