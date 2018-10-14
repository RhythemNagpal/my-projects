#include<stdio.h>
main()
{int z=1,a,i;
	printf("enter number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		z=z*i;
	}
printf("factorial is :%d",z);
}
