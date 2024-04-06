/*
 * main.c
 *
 *  Created on: Apr 6, 2024
 *      Author: puola
 */
#include <stdio.h>
#include <string.h>

void prime_numbers_print(void);
void factorial_recursion(void);
int sub_factorial_recursion(int);
void reverse_string_recursion(void);
void sub_reverse_string_recursion(void);
void power_recursion(void);
int sub_power_recursion(int,int);

int main(){

	/*choose whatever function you want*/

	return 0;
}

void prime_numbers_print(void){

	int n1,n2;

	fflush(stdin);fflush(stdout);


	printf("enter two numbers(intervals): ");

	fflush(stdout);fflush(stdin);

	scanf("%d",&n1);

	fflush(stdin);fflush(stdout);

	scanf("  %d",&n2);

	fflush(stdin);fflush(stdout);

	printf("prime numbers between %d and %d are:",n1,n2);

	int loop = n2-n1,i,number_loop=n1;

	for(i = 0 ; i <= loop; i++){

		if(!((number_loop%2 == 0 && number_loop != 2) || (number_loop%3 == 0 && number_loop != 3) || (number_loop%5 == 0 && number_loop != 5) || (number_loop%7 == 0 && number_loop != 7) || (number_loop%9 == 0))){
			printf("%d ",number_loop);
		}
		number_loop++;
	}

}

int sub_factorial_recursion(int x){
	if(x > 1){
		return (x*sub_factorial_recursion(--x)) ;
	}
	else{return 1;}
}

void factorial_recursion(void){
	int number,result;
	printf("enter a positive integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	result = sub_factorial_recursion(number);
	printf("factorial of %d = %d",number,result);
}

void sub_reverse_string_recursion(void){
	char c;
	scanf("%c", &c);
	if (c != '\n') {
		sub_reverse_string_recursion();
		printf("%c", c);
	}
}


void reverse_string_recursion(void){
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	sub_reverse_string_recursion();
}


int sub_power_recursion(int x,int power){
	if(power > 1){
		power--;
		return (x*sub_power_recursion(x,power)) ;
	}
	else{return 1;}
}

void power_recursion(void){
	int number,power,result;
	printf("enter a base number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	printf("enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&power);
	result = sub_power_recursion(number,power);
	printf("%d^%d = %d",number,power,result);
}
