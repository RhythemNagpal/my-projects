#include<stdio.h>
main()
{
int ar[3][3],r,c,k,az[3][3];
for(r=0;r<3;r++)
{
	
for(c=0;c<3;c++)
{

	scanf("%d",&ar[r][c]);

}

}

for(r=0;r<3;r++)
{
	
for(c=0;c<3;c++)
{

printf("\t%d",ar[r][c]);

}
printf("\n");
}
printf("\n\n");
for(r=0;r<=2;r++)
{
	for(c=0;c<=2;c++)
	{ 
	az[r][c]=0;
		for(k=0;k<3;k++)
		
	{
		az[r][c]=az[r][c] +ar[r][k]*ar[k][c];
	
		}
printf("\t%d",az[r][c]);
	}
	printf("\n");
}

}
