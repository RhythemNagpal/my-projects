#include<stdio.h>
#include<conio.h>
void main()
{ int a[5];
int i,j;
for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);	
}
for(j=0;j<10;j++)
{
	printf("the  value at index is %d and the address is %d ",a[j],&a[j]);
}

getch();}

