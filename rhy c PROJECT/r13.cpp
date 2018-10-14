#include<stdio.h>
main()
{
	int ar[10],c,pos,val,i;
	for(i=0;i<=8;i++)
	{
	printf("Enter no");		
		scanf("%d",&ar[i]);
		}


printf("enter position you wanna change");
scanf("%d",&pos);
printf("enter value");
scanf("%d",&val);
for(c=0;c<=pos-1;c++)
{
ar[c+1]=ar[c];	
}
ar[pos-1]=val;
for(i=0;i<=8;i++)
	{
	printf("\n%d",ar[i]);		
		
		}

}
