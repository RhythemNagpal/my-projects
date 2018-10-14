#include<stdio.h>
main()
{int a,z,x=0,n;
	printf("enter number");
	scanf("%d",&a);
n=a;
	while(a>0)
	{
		z=a%10;
		x=x+z*z*z;
		a=a/10;
	}
if(x==n)
printf("number is armstrong");
else
printf("number is not armstrong");
}
