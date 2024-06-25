#include<stdio.h>

main()
{
	int angle1,angle2,angal3;
	
	printf("enter the first angal =");
	scanf("%d",&angle1);
	printf("enter the second angal =");
	scanf("%d",&angle2);
	
	angal3=180-(angle1+angle2);
	printf("the third angal is =%d",angal3);
}