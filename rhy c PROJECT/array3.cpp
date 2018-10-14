#include<stdio.h>
main()
{
	int month[13]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=0;i<12;i++)
	{
		printf("\nMonth %d of a year contains %d days.",i+1,month[i]);
		printf("\n");
	}
}
