#include<stdio.h>
main()
{
	int x;
	printf("Enter year");
	scanf("%d",&x);
	if (x%4==0)
	goto leap;
	else
	goto nleap;
	leap:
		printf("it is a leap year");
		return(0);
		nleap:
			printf("it is not a leap year");
			return(0);

}
