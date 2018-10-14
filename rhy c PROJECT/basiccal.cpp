#include<stdio.h>
main()
{
 int a,b;
 int sum,sub,mult,div,n;
 char x;
 printf("Enter 1st number");
 scanf("%d",&a);                                                    //First number accepted
 printf("Enter 2nd number");
 scanf("%d",&b);                                                   //Second number accepted
 printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Devision");
 printf("\nEnter choice: ");                                         //Choice accepted
 scanf("%d",&n);
   sum=a+b;
 sub=a-b;
 mult=a*b;
 div=a/b;
 switch(n)
 {
 case 1:                                                        //condition
 printf("\nSum is: %d",sum);
 break;                                               //Addition printed
 case 2:                                                  //condition
 printf ("\nSub is: %d",sub);                                    //Subtraction printed
break;
case 3:                                                 //condition
 printf("\nmult is: %d",mult);                                //multiplication printed
 break;
 case 4:                                              //condition
 printf("\ndiv is: %d",div);                                //devision printed
 break;
 default:{                                                    //condition
 printf("\nWrong input");
break;
}}
  
}
