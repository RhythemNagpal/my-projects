#include<stdio.h>
main()
{
	int n,x,r=0;
char s='y';
do{
	printf("Enter number to be reversed");
	scanf("%d",&n);
r=0;
	while(n>0)
	{
		x=n%10;
		r=x+r*10;
		n=n/10;
	}
printf("\nreverse of number is :%d",r);
printf("\ndo you want another number to be reverse?(y/n)");
scanf("%c",&s);
}
while(s='y');

}
