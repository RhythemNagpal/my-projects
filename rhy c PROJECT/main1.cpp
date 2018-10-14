#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
FILE *t;
int q;
char c;

main()
{int i,j,tp,w,z;
for(i=0;i<=1;i++)
{
for(j=0;j<10;j++)
{
	printf("*");
}
printf("\n");
}
for(i=0;i<=3;i++)
{
	printf("**\n");
}
for(i=0;i<=1;i++)
{
for(j=0;j<10;j++)
{
	printf("*");
}
printf("\n");
}
for(i=0;i<=3;i++)
{
	printf("**\n");
}
for(i=0;i<=1;i++)
{
for(j=0;j<10;j++)
{
	printf("*");
}
printf("\n");
}
printf("Book of C\n");
	printf("\nSubmitted by: Rhythem\nRoll no: 12\nRegistration number:11702138\nSubmitted to:Gursharan Singh");
printf("\nPress any character to continue");
getch();
system("cls");
char d;
ls:	printf("\n                                               WELCOME TO MY C WORLD");
	printf("\n\nLIST OF PROGRAMMES:\n");

FILE *t;
t=fopen("topics.txt","r");
while((d=fgetc(t))!=EOF)
printf("%c",d);
fclose(t);
printf("\n");
printf("Enter the topic number you want to read ");
scanf("%d",&tp);
switch(tp)
{
	case 1:system("cls");
FILE *t;
char c;
printf("\nThis file contains theory  only");
t=fopen("basicstructure.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

	case 2:
system("cls");
printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:system("cls");
		goto th;
		break;
		case 2:system("cls");
			goto ex;
			break;
}
th:
	{
t=fopen("basicstructure.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
}
ex:
	{
t=fopen("typeconvr.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	
printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:system("cls");
		system("typeconvr.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

case 2:system("cls");
	goto ls;
}
break;
}


	case 3:
system("cls");
printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:system("cls");
		goto th3;
		break;
		case 2:system("cls");
			goto ex3;
			break;
}
th3:
	{
t=fopen("basicstructure.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
}
ex3:
	{
t=fopen("typeconvr.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	
printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:system("cls");
		system("typeconvr.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

case 2:system("cls");
	goto ls;
}
break;
}



	case 4:
system("cls");
printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:system("cls");
		goto th4;
		break;
		case 2:system("cls");
			goto ex4;
			break;
}
th4:
	{
t=fopen("if.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
}
ex4:
	{
t=fopen("if.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	
printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:system("cls");
		system("if.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

case 2:system("cls");
	goto ls;
}
break;
}


	case 5:
system("cls");
printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:system("cls");
		goto th5;
		break;
		case 2:system("cls");
			goto ex5;
			break;
}
th5:
	{
t=fopen("goto.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
}
ex5:
	{
t=fopen("goto.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	
printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:system("cls");
		system("goto.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

case 2:system("cls");
	goto ls;
}
break;
}



	case 6:
system("cls");
printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:system("cls");
		goto th6;
		break;
		case 2:system("cls");
			goto ex6;
			break;
}
th6:
	{
t=fopen("switch.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
}
ex6:
	{
t=fopen("basiccal.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	
printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:system("cls");
		system("basiccal.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

case 2:system("cls");
	goto ls;
}
break;
}



case 7:
system("cls");
printf("\nThis file has code only \n");
t=fopen("fact.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	
printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:system("cls");
		system("fact.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

case 2:system("cls");
	goto ls;

break;

}



case 8:
system("cls");
printf("\nThis file has code only \n");
t=fopen("arms.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	
printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:system("cls");
		system("arms.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

case 2:system("cls");
	goto ls;
}
break;




	case 9:
system("cls");
printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:system("cls");
		goto th9;
		break;
		case 2:system("cls");
			goto ex9;
			break;
}
th9:
	{
t=fopen("array.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
}
ex9:
	{
		printf("Example 1:\n");
t=fopen("array1.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	printf("Example 2:\n");
	
t=fopen("array2.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	printf("Example 3:\n");

t=fopen("array3.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");

printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:
	printf("you want to execute which example: ");
	scanf("%d",&q);
	switch(q)
	{
case 1:system("cls");
		system("array.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;
case 2:system("cls");
		system("array2.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

case 3:system("cls");
		system("array3.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;


}
case 2:system("cls");
	goto ls;
}
break;
}


	case 10:
system("cls");
printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:system("cls");
		goto th10;
		break;
		case 2:system("cls");
			goto ex10;
			break;
}
th10:
	{
t=fopen("search and sort.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
}
ex10:
	{
t=fopen("search and sort.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	
printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:system("cls");
		system("search and sort.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

case 2:system("cls");
	goto ls;
}
break;
}




case 11:
system("cls");
printf("\nThis file has code only \n");
t=fopen("delinsmer.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	
printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:system("cls");
		system("delinsmer.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

case 2:system("cls");
	goto ls;

break;
}


	case 12:system("cls");
printf("\nThis file contains theory  only");
t=fopen("headerfiles.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;


case 13:
system("cls");
printf("\nThis file has code only \n");
t=fopen("2darray.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	
printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:system("cls");
		system("2darray.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

case 2:system("cls");
	goto ls;

break;
}


	case 14:
system("cls");
printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:system("cls");
		goto th14;
		break;
		case 2:system("cls");
			goto ex14;
			break;
}
th14:
	{
t=fopen("structure.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
}
ex14:
	{
		printf("Structure:\n");
t=fopen("structure.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	printf("Nested Structure:\n");
	
t=fopen("nested structure.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");

printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:
	printf("you want to execute which example: ");
	scanf("%d",&q);
	switch(q)
	{
case 1:system("cls");
		system("structure.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;
case 2:system("cls");
		system("nested structure.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

}
case 2:system("cls");
	goto ls;

break;
}


	case 15:
system("cls");
printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:system("cls");
		goto th15;
		break;
		case 2:system("cls");
			goto ex15;
			break;
}
th15:
	{
t=fopen("union.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
}
ex15:
	{
t=fopen("union.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	
printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:system("cls");
		system("union.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

case 2:system("cls");
	goto ls;
}
break;
}



	case 16:system("cls");
printf("\nThis file contains theory  only");
t=fopen("pointer.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

	case 17:system("cls");
printf("\nThis file contains theory  only");
t=fopen("storageclass.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

	case 18:
system("cls");
printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:system("cls");
		goto th18;
		break;
		case 2:
			goto ex18;
			break;
}
th18:
	{
t=fopen("stringfn.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
}
ex18:
	{
t=fopen("string functions.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	
printf("1.Execute\n2.Return to list of programmes\n");
scanf("%d",&z);
switch(z)
{
case 1:system("cls");
		system("search and sort.exe");printf("\n");
printf("Press any key to go to main list");
getch();system("cls");
goto ls;

case 2:system("cls");
	goto ls;
}
break;
}



}
}}

