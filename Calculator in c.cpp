#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
int number;
double number1,number2,result;


printf("**************************************\n");
printf("**************************************\n");
printf("*****     Welcome Calculator     *****\n");
printf("**************************************\n");	
printf("**************************************\n\n");
printf("1.Addition operation(+)\n");
printf("2.Subtraction operation(-)\n");	
printf("3.Multiplication(.)\n");
printf("4.Division operation(/)\n");
printf("5.Square root operation(x^1/2)\n");
printf("6.Square operation(x^2)\n");
printf("7.Sin(x) operation\n");
printf("8.Cos(x) operation\n");
printf("9.Absolute value oparetion(|x|)\n");
printf("10.Logarithm  operation in natural logarithm\n");
printf("11.Exponential operation(x^y) \n\n");

printf("Press a number for the operation you want\n");
	
scanf("%d",&number);

switch(number){
	
	case 1:
		printf("Write two numbers\n");
		scanf("%lf%lf",&number1,&number2);
		result=number1+number2;
		printf("Result=%lf",result);
		break;
		
	case 2:	
		printf("Write two numbers\n");
		scanf("%lf%lf",&number1,&number2);
		result=number1-number2;
		printf("Result=%lf",result);
		break;
		
	case 3:
		printf("Write two numbers\n");
		scanf("%lf%lf",&number1,&number2);
		result=number1*number2;
		printf("Result=%lf",result);
		break;
		
	case 4:
		printf("Write two numbers\n");
		scanf("%lf%lf",&number1,&number2);
		result=number1/number2;
		printf("Result=%lf",result);
		break;
		
	case 5:
		printf("Write a number\n");
		scanf("%lf",&number1);
		result=sqrt(number1);
		printf("Result=%lf",result);
		break;
	
	case 6:
		printf("Write a number\n");
		scanf("%lf",&number1);
		result=number1*number1;
		printf("Result=%lf",result);
		break;
	
	case 7:
		printf("Write a number for x (Sin(x))\n");
		scanf("%lf",&number1);
		result=sin(number1);
		printf("Result=%lf",result);
		break;
	
	case 8:
		printf("Write a number for x (Cos(x))\n");
		scanf("%lf",&number1);
		result=cos(number1);
		printf("Result=%lf",result);
		break;
		
	case 9:
		printf("Write a number\n");
		scanf("%lf",&number1);
		result=fabs(number1);
		printf("Result=%lf",result);
		break;
		
	case 10:
		printf("Write a number\n");
		scanf("%lf",&number1);
		result=log(number1);
		printf("Result=%lf",result);
		break;	
	
	case 11:
		printf("Write a number\n");
		scanf("%lf",&number1);
		printf("Write a expont\n");
		scanf("%lf",&number2);
		result=pow(number1,number2);
		printf("Result=%lf",result);
		
}

	return 0;
}
