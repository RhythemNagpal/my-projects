#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
FILE *t;
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
	case 1:
FILE *t;
char c;
printf("\nThis file contains theory  only");
t=fopen("basicstructure.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

	case 2:

printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:
		goto th;
		break;
		case 2:
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
case 1:
		system("typeconvr.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

case 2:
	goto ls;
}
break;
}


	case 3:

printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:
		goto th3;
		break;
		case 2:
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
case 1:
		system("typeconvr.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

case 2:
	goto ls;
}
break;
}



	case 4:

printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:
		goto th4;
		break;
		case 2:
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
case 1:
		system("if.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

case 2:
	goto ls;
}
break;
}


	case 5:

printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:
		goto th5;
		break;
		case 2:
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
case 1:
		system("goto.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

case 2:
	goto ls;
}
break;
}



	case 6:

printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:
		goto th6;
		break;
		case 2:
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
case 1:
		system("basiccal.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

case 2:
	goto ls;
}
break;
}



case 7:

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
case 1:
		system("fact.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

case 2:
	goto ls;
}
break;
}



case 8:

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
case 1:
		system("arms.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

case 2:
	goto ls;
}
break;
}



	case 9:

printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:
		goto th9;
		break;
		case 2:
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
t=fopen("array.cpp","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
	printf("Example 3:\n");
	
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
case 1:
		system("array.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;
case 2:
		system("array2.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

case 3:
		system("array3.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;


}
case 2:
	goto ls;
}
break;
}


	case 10:

printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:
		goto th10;
		break;
		case 2:
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
case 1:
		system("search and sort.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

case 2:
	goto ls;
}
break;
}




case 11:

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
case 1:
		system("delinsmer.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

case 2:
	goto ls;
}
break;
}


	case 12:
FILE *t;
char c;
printf("\nThis file contains theory  only");
t=fopen("headerfiles.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;


case 13:

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
case 1:
		system("2darray.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

case 2:
	goto ls;
}
break;
}


	case 14:

printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:
		goto th14;
		break;
		case 2:
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
case 1:
		system("structure.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;
case 2:
		system("nested structure.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

}
case 2:
	goto ls;
}
break;
}


	case 15:

printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:
		goto th15;
		break;
		case 2:
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
case 1:
		system("union.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

case 2:
	goto ls;
}
break;
}



	case 16:
printf("\nThis file contains theory  only");
t=fopen("pointer.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("Press any key to go to main list");
getch();
goto ls;

	case 17:
printf("\nThis file contains theory  only");
t=fopen("storageclass.txt","r");
while((c=fgetc(t))!=EOF)
printf("%c",c);
fclose(t);
printf("Press any key to go to main list");
getch();
goto ls;

	case 18:

printf("\n1.Go to theory\n2.Go to Example");
scanf("%d",&w);
switch(w)
{
	case 1:
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
case 1:
		system("search and sort.exe");printf("\n");
printf("Press any key to go to main list");
getch();
goto ls;

case 2:
	goto ls;
}
break;
}



}
}

