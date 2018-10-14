#include<stdio.h>
struct date
{
	int dd;
	int mm;
	int yy;
};
struct add
{
	int stno;
	char stname[20];
};
struct sname
{
	char name[12];
	struct date DOB;
	struct add street;
	}p;
	main()
	{
	    int a,i;
		printf("\nenter name of student ");
		scanf("%s",&p.name);
		printf("enter date of birth ");
	scanf("%d",&p.DOB.dd);
		printf("enter month of birth ");
	scanf("%d",&p.DOB.mm);
		printf("enter year of birth ");
	scanf("%d",&p.DOB.yy);
		printf("enter street number ");
	scanf("%d",&p.street.stno);
		printf("enter street number ");
	scanf("%s",&p.street.stname);
    printf("\nHello %s.\nYour date of birth is %d/%d/%d.\nYou live at %d %s",p.name,p.DOB.dd,p.DOB.mm,p.DOB.yy,p.street.stno,p.street.stname);
	
/*printf("\ndate :%d",p.DOB.dd);
	printf("\nmonth :%d",p.DOB.mm);
	printf("\nyear :%d",p.DOB.yy);
	printf("\nstreet number :%d",p.street.stno);
	printf("\nstreet name :%s",p.street.stname);
	*/}
