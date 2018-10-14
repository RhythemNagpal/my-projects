#include<stdio.h>
int i,n,x,a[20],j;
int linser(int a[20],int x);
int binser(int a[20],int x);
int binsor(int a[20],int x);
int linsor(int a[20],int x);
main()
{
	for(i=0;i<20;i++)
{
	printf("Enter a series");
	scanf("%d",&a[i]);
}
printf("1.Linear sort\n2.Bubble sort\n3.linear search\n4.Binary search\n");
	printf("\nchoose a no: \n");
	scanf("%d",&n);
if(n==3)
{
	printf("enter no to be searched");
	scanf("%d",&x);
	linser(a,x);
	}
else if(n==4)
{
	printf("enter no to be searched");
	scanf("%d",&x);
	binsor(a,x);
	

}
else if(n==2)
{binsor(a,x);
	for(i=0;i<20;i++)
{
	printf("%d\n",a[i]);

}
}
else if(n==1)
{linsor(a,x);
	for(i=0;i<20;i++)
{
	printf("%d\n",a[i]);

}
}

}
int linser(int a[],int x)
{
	for(i=0;i<20;i++)
	{
		if(a[i]==x)
		{
			printf("%d",i);
		}
	}
}
int binser(int a[],int x)
{
	int st=0,en=19,mid;
	
	while(st<=en)
	{
	mid=(st+en)/2;
		if(a[mid]==x)
	break;
	else if(a[mid]>x)
	en=mid-1;
	
	else if(a[mid]<x)
	st=mid+1;
	}
printf("%d",mid);
}
int binsor(int a[],int x)
{int t;
	
	for(i=0;i<19;i++)
	{
		for(j=0;j<19;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
							}
		}
	}
if(n==4)
binser(a,x);
}
int linsor(int a[],int x)
{	for(i=0;i<20;i++)
{
	if(a[i]>a[i+1])
{
	j=a[i];
	a[i]=a[i+1];
	a[i+1]=j;
}
}}
