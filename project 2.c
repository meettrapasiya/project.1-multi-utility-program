#include<stdio.h>

main()
{
	
	float basesalary,hrap,dap,tap;
	float  hra,da,ta,grosssalary;
	
	printf("enter the basesalary =");
	scanf("%f",&basesalary);
	printf("enter the hra =");
	scanf("%f",&hra);
	printf("enter the da =");
	scanf("%f",da);
	printf("enter the ta =");
	scanf("%f",ta);
	
	hra=(hra/100)*basesalary;
	da=(da/100)*basesalary;
	ta=(ta/100)*basesalary;
	
	grosssalary = basesalary+hra+da+ta;
	
	printf("grosssalary = rs.%.2f\n",grosssalary);
	
	
}