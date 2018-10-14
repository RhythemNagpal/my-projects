#include<stdio.h>
main()
{
	
	int a,z;
	printf("Enter percentage:");
	scanf("%d",&a);
	z=a/10;
		switch(z)
		{
			case 10:
				printf("grade A");
				break;
		case 9:
				printf("grade A");
				break;
				case 8:
				printf("grade B");
				break;
				case 7:
				printf("grade C");
				break;
				case 6:
				printf("grade D");
				break;
		default:
			printf("fail");
			break;
		
	}
}

