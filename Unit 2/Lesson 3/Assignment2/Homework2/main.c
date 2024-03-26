/*
 * main.c
 *
 *  Created on: Feb 13, 2024
 *      Author: puola
 *      Assignment 1
 */


#include <stdio.h>

void EvenChecker();
void CheckVowel();
void LargestNumber();
void PositiveOrNegative();
void IsAlphabet();
void SumNaturalNumbers();
void factorial();
void calculator();


int main(){

	calculator();



	return 0 ;
}

void EvenChecker(){

	int number;

	printf("Enter an integer you want to check : ");

	fflush(stdout);

	scanf("%d", &number);


	if(number%2 == 0){
		printf("%d is even. \n",number);
	}
	else{
		printf("%d is odd. \n",number);
	}
}

void CheckVowel(){

	char character;

	printf("Enter an alphabet : ");

	fflush(stdout);

	scanf("%c", &character);

	switch(character){
	case 'a' :

		printf("a is a vowel");
		break;

	case 'o' :

		printf("o is a vowel");
		break;

	case 'e' :

		printf("e is a vowel");
		break;

	case 'i' :

		printf("i is a vowel");
		break;

	case 'u' :

		printf("u is a vowel");
		break;

	default:
		printf("%c is a consonant",character);
		break;

	}
}
void LargestNumber(){

	float number1,number2,number3;

	printf("Enter three numbers : ");

	fflush(stdin);fflush(stdout);

	scanf("%f%f%f", &number1,&number2,&number3);


	if(number1 > number2){
		printf("Largest number = %f",number1);
	}
	else if(number1 > number3){
		printf("Largest number = %f",number1);
	}
	else if(number2 > number3){
		printf("Largest number = %f",number2);
	}
	else{
		printf("Largest number = %f",number3);
	}

}

void PositiveOrNegative(){

	float number;

	printf("Enter a number: ");

	fflush(stdout);

	scanf("%f", &number);

	if(number > 0){
		printf("%f is positive.",number);
	}
	else if(number < 0){
		printf("%f is negative.",number);
	}
	else{
		printf("You entered Zero");
	}

}

void IsAlphabet(){

	char character;

	printf("Enter a character: ");

	fflush(stdout);

	scanf("%c", &character);

	if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
		printf("%c is an alphabet.",character);
	}
	else{
		printf("%c is not an alphabet.",character);
	}

}
void SumNaturalNumbers(){

	int number;

	printf("Enter an integer : ");

	fflush(stdout);

	scanf("%d", &number);

	float half = number/2.0 ;

	number++;

	int Sum = number*half;

	printf("Sum = %d",Sum);

}


void factorial(){

	int number;

	int factorial = 1;

	printf("Enter an integer : ");

	fflush(stdout);

	scanf("%d", &number);

	if(number < 0){
		printf("Error!! Factorial of negative number does not exist.");
	}
	else{

	while(number){
		factorial *= number--;
	}

	printf("Factorial = %d",factorial);
	}

}


void calculator(){

	char operator;

	float operand1,operand2;

	printf("Enter operator either + or - or * or divide : ");

	fflush(stdout);

	scanf("%c",&operator);

	printf("Enter two operands: ");

	fflush(stdout);

	scanf("%f %f",&operand1,&operand2);

	switch(operator){

	case '+':

		printf("%f + %f = %f",operand1,operand2,(operand1+operand2));

		break;

	case '-':

		printf("%f - %f = %f",operand1,operand2,(operand1-operand2));

		break;

	case '*':

		printf("%f * %f = %f",operand1,operand2,(operand1*operand2));

		break;

	case '/':

		printf("%f / %f = %f",operand1,operand2,(operand1/operand2));

		break;

	}
}









