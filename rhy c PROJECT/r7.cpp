#include<stdio.h>
main()
{
	int a,b,c,d;
	for(a=10;a>=1;a--)
{
for(b=1;b<=a;b++)
	{
			printf(" ");
}
		for(c=10;c>=a;c--)
		{
		printf(" *");
				}
printf("\n");
}

for(a=2;a<=10;a++)
{
for(b=1;b<=a;b++)
	{
			printf(" ");
}
		for(c=10;c>=a;c--)
		{
		printf(" *");
				}
printf("\n");
}

	for(a=5;a>=1;a--)
{
for(b=1;b<=a+5;b++)
	{
			printf(" ");
}
		for(c=5;c>=a;c--)
		{
		printf(" *");
				}
printf("\n");
}
}

