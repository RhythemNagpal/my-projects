#include<stdio.h>
#include<string.h>
main()
{
	char n[20];
	int a,b,c;
	printf("Enter String:");
	gets(n);
	a=strlen(n);
	for(b=0;b<a;b++)
	{
		for(c=0;c<=10;c++)
		{
			printf("\n");
		}
		printf("%c",n[b]);
	}
}
