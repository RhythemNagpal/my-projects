#include<stdio.h>
main()
{
	
	int x,i,n[20],del,w,pos,j,s,ins,z[20],n2[20],x2,h=0,k=0,m=1;
while(m=1){
	printf("enter number of elements in array");
	scanf("%d",&x);
	printf("enter elements of array");
	for(i=0;i<x;i++)
	{
	scanf("%d",&n[i]);
}
	printf("elements of array are:\n");
	
	for(i=0;i<x;i++)
	{
	printf("\n%d at %d",n[i],i+1);
}
printf("\n1.delete a number\n2.Insert a number\n");
scanf("%d",&w);
if(w==1)
{
printf("\nenter number to be deleted");
scanf("%d",&del);
del--;
	for(i=0;i<x;i++)
	{
if(i>=del)
	n[i]=n[i+1];
}
	for(i=0;i<x;i++)
	{
		if(n[i]!=0)
	printf("\n%d at %d",n[i],i+1);
}

}
else if(w==2)
{
	   printf("\nenter number to be inserted");
	   scanf("%d",&ins);
printf("enter position for number to be inserted");
	   scanf("%d",&pos);
   for (i=x-1;i>=pos-1;i--)
   {   n[i+1]=n[i]; } 
   n[pos-1]=ins;

	for(i=0;i<=x;i++)
	{

	printf("\n%d at %d",n[i],i+1);
}
}else
printf("invalid input");
printf("\ndo you want more press 1 ");
scanf("%d",&m);
if(m!=1)
break;
}
}
