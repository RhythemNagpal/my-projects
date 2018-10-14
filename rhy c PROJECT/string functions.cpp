#include<stdio.h>
#include<string.h>
int x,b,i=0,count=0,count1=0,count2=0,l1,l2,z,n,a;
char n1[10],n2[10],n3[10],n4[20];
void len(char n1[20],char n2[20]);
void cpy(char n1[20],char n2[20]);
void cmp(char n1[20],char n2[20]);
void uplo(char n1[20],char n2[20]);
void cat(char n1[20],char n2[20]);

main()
{
printf("enter 1st string");
scanf("%s",&n1);
printf("enter 2nd string");
scanf("%s",&n2);
printf("1.String length\n2.String copy\n3.String compare\n4.String upper-lower\n5.String concatination\n6.String reverse");
printf("\nchoose number");
scanf("%d",&x);
switch(x)
{
	case 1:
		len(n1,n2);
		break;
case 2:
		cpy(n1,n2);
		break;
case 3:
		cmp(n1,n2);
		break;
case 4:
		uplo(n1,n2);
		break;
case 5:
		cat(n1,n2);
		break;
/*case 6:
		rev(n1,n2);
		break;*/
		
default:
	printf("wrong input");
		
}
void len(char n1[],char n2[]);
{
	while(n1[i]!='\0')
	{
		count1++;
		i++;
	}
	while(n2[i]!='\0')
	{
		count2++;
		i++;
	}
printf("length of string 1=%d",count1);
printf("length of string 2=%d",count2);
}
}
void cpy(char n1[],char n2[])
{
while(n1[i]!='\0')
	{
		n3[i]=n1[i];
		i++;
	}
	n3[i]='\0';
	printf("third string is copy of 1st string that is");
	puts(n3);
}
void cmp(char n1[],char n2[])
{
	while(n1[i]!='\0' && n2[i]!='\0')
	{
		if(n1[i]!=n2[i])
		count++;
		i++;
	}
if(count==1)
printf("strings are not same");
else
printf("strings are same");
}
void rev(char n1[],char n2[]){
		l1=strlen(n1);
		i=0;
while(i<l1)
	{
		if(n3[l1-i]!=n1[i])
				i++;
	}
puts(n3);
		l2=strlen(n2);
		i=0;
while(i<l2)
	{
		if(n4[l2-i]!=n2[i])
				i++;
	}
puts(n4);
}
void uplo(char n1[],char n2[])
{i=0;
while(n1[i]!='\0')
	{
		z=n1[i];
		if(z>97 && z<121)
		{
		
				z=z-32;
printf("%c",z);
}
if(z>65 && z<91)
		{
		
				z=z+32;
printf("%c",z);	
	}
	
i++;}
}
void cat(char n1[],char n2[])
{
	l1=strlen(n1);
	l2=strlen(n2);
	for(a=0;a<l1;a++)
	{
		n3[a]=n1[a];
	}
for(a=l1-1,b=0;a<=l2-1,b<l2;a++,b++)
{
	n3[a]=n2[a];
}
puts(n3);
}
/*void rev(char n1[],char n2[])
{
		l1=strlen(n1);
		for(a=0,b=l1;a<l1,b>=0;a++,b--)
		{
			n3[b]=n1[a];
		}
puts(n3);*/


