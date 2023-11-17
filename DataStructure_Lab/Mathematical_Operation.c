#Algorithm
Step1 : Start
Step2 : Ask the user to enter two numbers and read it in the variables as num1,num2
Step3 : Ask the user to select operation and read it in the variable choice
Step4 : Using switch case call the particular function for Arithmetic Operation
Step5 : Print Result
Step6 : Stop

#include<stdio.h>
int result;
int add(int,int);
int sub(int,int);
int multi(int,int);
int divi(int,int);
int mod(int,int);
int main()
   {
	int num1,num2,choice;
	
	printf("Enter First Number  : ");
	scanf("%d",&num1);
	printf("Enter Second Number : ");
	scanf("%d",&num2);
	printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Modulus");
	printf("Select Option : ");
	scanf("%d",&choice);	
   	
	switch(choice)
	{
	 case 1:
	   add(num1,num2);
	   break;
	 case 2:
	   sub(num1,num2);
	   break;
	 case 3:
	   multi(num1,num2);
	   break;	
	 case 4:
	   divi(num1,num2);
	   break;
	 case 5:
	   mod(num1,num2);
	   break;
	 default:
	   printf("INVALID OPTION!!");
	   break;
	}
   }

int add(int num1,int num2)
   {
	result = num1+num2;
	printf("Result = %d",result);
   }
int sub(int num1,int num2)
   {
	result = num1-num2;
	printf("Result = %d",result);
   }
int multi(int num1,int num2)
   {
	result = num1*num2;
	printf("Result = %d",result);
   }
int divi(int num1,int num2)
   {
	result = num1/num2;
	printf("Result = %d",result);
   }
int mod(int num1,int num2)
   {
	result = num1%num2;
	printf("Result = %d",result);
   }

#Output 
/*
Enter First Number  : 25
Enter Second Number : 12
1.Addition
2.Substraction
3.Multiplication
4.Division
Select Option : 1
Result = 37
*/
