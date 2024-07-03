#include<stdio.h>

main()
{
	int gs,hra,da,ta,bs;
	printf("Enter basic salary=");
	scanf("%d",&bs);
	printf("Enter the HRA=");
	scanf("%d",&hra);
	printf("Enter the DA=");
	scanf("%d",&ta);
	printf("Enter the TA=");
	scanf("%d",&da);
	hra=(10*bs)/100;
	da=(5*bs)/100;
	ta=(8*bs)/100;
	gs=hra+ta+da+bs;
	printf("gross salary =%d",gs);
} 