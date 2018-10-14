#include<stdio.h>
main()
{
	FILE *f;
	f=fopen("r1.cpp","r");
if(f==NULL)
{
	printf("cant open file");
}
else
printf("file created");
}
