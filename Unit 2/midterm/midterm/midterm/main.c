/*
 * main.c
 *
 *  Created on: Apr 2, 2024
 *      Author: puola
 */


#include <stdio.h>
#include <string.h>
#include<math.h>

void Sum_All(void);
void square_root(void);
void prime_numbers_print(void);
void reverse_digits(void);
void count_binary(void);
void unique_element(void);
void SumNaturalNumbers(void);
void reverse_array(void);
void reverse_string(void);
void largest_ones(void);

int main(){
	largest_ones();
	return 0;
}

void Sum_All(void){

	int number;

	fflush(stdin);fflush(stdout);

	scanf("%d",&number);


	int rem = 0,sum = 0, i = 0, loops = log10(number)+1;

	while(i <= loops){
		rem = number%10;
		number = number / 10;
		sum+=rem;
		i++;
	}

	printf("%d",sum);
}

void square_root(){

	int number;

	fflush(stdin);fflush(stdout);

	scanf("%d",&number);

	double SqRoot_number = sqrt(number);

	printf("%lf",SqRoot_number);

}

void prime_numbers_print(){

	int n1,n2;

	fflush(stdin);fflush(stdout);


	printf("n1 = ");

	fflush(stdout);fflush(stdin);

	scanf("%d",&n1);

	fflush(stdin);fflush(stdout);

	printf("n2 = ");

	fflush(stdin);fflush(stdout);

	scanf("  %d",&n2);

	fflush(stdin);fflush(stdout);

	int loop = n2-n1,i,number_loop=n1;

	for(i = 0 ; i <= loop; i++){

		if(!((number_loop%2 == 0 && number_loop != 2) || (number_loop%3 == 0 && number_loop != 3) ||
				(number_loop%5 == 0 && number_loop != 5) || (number_loop%7 == 0 && number_loop != 7) ||
				(number_loop%9 == 0))){

			printf("%d ",number_loop);
		}
		number_loop++;
	}

}

void reverse_digits(){
	char str[100];

	fflush(stdin);fflush(stdout);

	printf("number?");

	fflush(stdin);fflush(stdout);

	scanf("%s",str);

	fflush(stdin);fflush(stdout);

	int i;
	for(i = strlen(str)-1;i <= strlen(str); i--){
		printf("%c",str[i]);
	}
}

void count_binary(void){

	int number;
	int count = 0;

	fflush(stdin);fflush(stdout);

	scanf("%d",&number);
	if(number <= 0){
		printf("you entered zero or a negative number");
	}
	else{

		do{

			char mask = number & 1;
			if(mask == 1){
				count++;
				mask = 0;
			}
			number = number >> 1;

		}while(number!=0);
	}
	printf("%d",count);
}

void unique_element(){

	int arr[10];

	printf("input the  number of elements ");

	int element_number;

	fflush(stdin);fflush(stdout);

	scanf("%d",&element_number);

	fflush(stdin);fflush(stdout);

	printf("input the elements ");

	int i,j,temp,unique=0;

	for(i = 0; i < element_number; i++){
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}

	j = 0;
	i = 0;
	while(i < element_number){
		temp = arr[j];
		if((i!=j) && (temp == arr[i])){
			i = 0;
			j++;
			continue;
		}
		else{
			 if((i!=j)){
						unique = temp;
						}
		}
		i++;
	}

	printf("unique number is %d",unique);

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

void reverse_array(void){

	int arr[10];

	printf("input the  number of elements ");

	int element_number;

	fflush(stdin);fflush(stdout);

	scanf("%d",&element_number);

	fflush(stdin);fflush(stdout);

	printf("input the elements ");

	int i;

	for(i = 0; i < element_number; i++){
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}

	for(i=0; i < element_number;i++){
		printf("%d ",arr[i]);
	}
}

void reverse_string(void){

	char str[100];

	fflush(stdin);fflush(stdout);

	printf("string? ");

	fflush(stdin);fflush(stdout);

	scanf("%s",str);

	fflush(stdin);fflush(stdout);

	int i;
	for(i = strlen(str)-1;i <= strlen(str); i--){
		printf("%c",str[i]);
	}
}

void largest_ones(void){

	int number,counter=0,largestOne=0,i,start=0;

	fflush(stdin);fflush(stdout);

	scanf("%d",&number);

	for(i=0;i<32;i++){
		int mask = number & 1;
		if((mask == 1) && (start == 1)){
			counter++;
			number = number >> 1;
			continue;
		}
		if((mask == 0) && (start == 1) && (counter > 0)){
			/*largestOne = (largestOne >= counter) ? largestOne : counter;*/
			if(largestOne <= counter){
				largestOne = counter;
			}
			counter = 0;
			start = 0;
			number = number >> 1;
			continue;
		}
		if((mask == 0) && ((start == 0)||(start == 1)) && (counter == 0)){
			start = 1;
			number = number >> 1;
		}

	}
		printf("%d",largestOne);
}




