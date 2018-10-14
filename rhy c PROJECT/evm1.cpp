#include<stdio.h>
#include<conio.h>
main()
{
	int total=0,can1=0,can2=0,can3=0,e,dec,yr;
	printf("Enter your birth year");
	scanf("%d",&yr);
	if(yr<=1999)
	{
	printf("enter 1 to open vote,otherwise enter 0 ");
	scanf("%d",&dec);
	printf("\nDate is:\tNov 9,2017\nTime is:\t10:00AM\n");
	while(dec==1)
	{
		printf("\ntype 1 to vote can1");
		printf("\ntype 2 to vote can2");
		printf("\ntype 3 to vote can3\n");
		scanf("%d",&e);
		switch(e)
		{
			case 1:
				can1++;
				break;
				case 2:
					can2++;
					break;
					case 3:
						can3++;
						break;
						default:
							printf("\nNOT VALID");
						}
						total++;
							printf("\ndo you want to continue? if yes press 1 otherwise press 0 ");
						scanf("%d",&dec);
					}
					printf("thank you");
										printf("\ntotal vote casted:%d",total);
						printf("\ncan1:%d",can1);
						printf("\ncan2:%d",can2);
						printf("\ncan3:%d",can3);
}
else
printf("You are not allowed to vote");
					getch();
				}
						
			
						
						
		
	

