#include<stdio.h>
main()
{
	
	int a,b,d;
	char c;
	printf("choose:\n+ for addition\n- for subtraction\n* for multiplication\n/ for devision\n");
	printf("Enter choice:");
	scanf("%c",&c);
	printf("enter 1st no:");
	scanf("%d",&a);
	printf("enter 2nd no:");
	scanf("%d",&b);
	
			switch(c)
		{
			case '+':
			d=a+b;	
				printf("sum:%d",d);
				break;
		case '-':
				d=a-b;
				printf("sub:%d",d);
				break;
				case '*':
					d=a*b;
				printf("mult:%d",d);
				break;
				case '/':
				d=a/b;
				printf("devide:%d",d);
				break;
					default:
			printf("invalid input");
			break;
		
	}
}

