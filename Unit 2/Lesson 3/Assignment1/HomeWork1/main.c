/*
 * main.c
 *
 *  Created on: Mar 26, 2024
 *      Author: puola
 */


#include <stdio.h>

void IntegerBuffer();
void IntegerAdder();
void FloatMultiplier();
void ASCII_Value();
void Swap_two_numbers();
void Swap_no_temp_variable();

int main(){

	printf("C Programming \n");
	IntegerBuffer();
	IntegerAdder();
	FloatMultiplier();
	ASCII_Value();
	Swap_two_numbers();
	Swap_no_temp_variable();


	return 0;
}

IntegerBuffer(){

	int number;

	printf("Enter a integer: ");

	fflush(stdout);

	scanf("%d", &number);

	printf("You entered: %d \n",number);
}

IntegerAdder(){

	int number1,number2;

	printf("Enter two integers: ");

	fflush(stdout);

	scanf("%d%d", &number1,&number2);

	printf("Sum: %d \n",(number1+number2));

}

FloatMultiplier(){
	float number1,number2;

	printf("Enter two numbers: ");

	fflush(stdout);

	scanf("%f%f", &number1,&number2);

	printf("Product: %f \n",(number1*number2));
}

ASCII_Value(){
	char mychar;

	printf("Enter a character: ");

	fflush(stdin);fflush(stdout);

	scanf("   %c", &mychar);


	printf("ASCII value of %c = %d \n",mychar,mychar);
}

Swap_two_numbers(){

	float number1,number2,temp;

	printf("Enter value of a: ");

	fflush(stdout);

	scanf("%f", &number1);

	printf("Enter value of b: ");

	fflush(stdout);

	scanf("%f",&number2);

	temp = number1;

	number1 =number2;

	printf("After swapping, value of a = %f \n",number1);

	number2 = temp;

	printf("After swapping, value of b = %f \n",number2);
}

Swap_no_temp_variable(){

	float number1,number2;

	printf("Enter value of a: ");

	fflush(stdout);

	scanf("%f", &number1);

	printf("Enter value of b: ");

	fflush(stdout);

	scanf("%f",&number2);

	number1 = number1 + number2;
	number2 = number1 - number2;
	number1 = number1 - number2; // Amazing, also can be done with XOR operation in this same order

	printf("After swapping, value of a = %f \n",number1);

	printf("After swapping, value of b = %f \n",number2);
}




