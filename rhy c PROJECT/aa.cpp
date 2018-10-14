#include<stdio.h>
#include<string.h>
int rev(char n1[],int l);
int x;
char n2[20];
main()
{
	int count=0,x,l;
	char n1[20],n2[20];
	gets(n1);
		l=strlen(n1);
		x=rev(n1,l);
	
		while(x!=0)
{	
l=strlen(n1);
n1[l-1]='\0';
x=rev(n1,l);

count++;
}
printf("%d",count);
}
int rev(char n1[],int l)
{
    int j=0;
    while(n1[j]!='\0')
    {
        n2[l-j]=n1[j];
    j++;}
        x=strcmp(n1,n2);
        return x;

}
    
