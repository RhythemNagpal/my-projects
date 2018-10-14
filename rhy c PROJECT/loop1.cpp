#include<stdio.h>
#include<conio.h>
int a,b;
main()
{
  for(a=1;a<=5;a++)
  {  for(b=5;b>=a;b--)
   {
	 printf(" ");
}
    for(b=1;b<=a;b++)
    {printf("*");
	} 
    for(b=2;b<=a;b++)
    {printf("*");
	} 
   	printf("\n");
  }
}
