 #include<stdio.h>
struct sname
{
	char name[12];
	char roll[25];
	int age;
	float att;
	};
	main()
	{
	struct sname s1[3];
	struct sname *p;
	p=s1;
	    int a,i;
		printf("Size of structure is :%d",sizeof(s1));
		for(i=0;i<2;i++)
	{
		printf("\nenter name of student ");
		scanf("%s",p[i].name);
		printf("enter Roll number of student ");
	scanf("%s",p[i].roll);
	printf("enter age of student ");
	scanf("%d",&p[i].age);
	printf("enter attendence percentage of student ");
	scanf("%f",&p[i].att);
}
		for(i=0;i<2;i++)
	{
				printf("\nname :%s",p[i].name);
	printf("\nRoll number :%s",p[i].roll);
	printf("\nAge :%d",p[i].age);
	printf("\nAttendence :%f%",p[i].att);
		}
}
