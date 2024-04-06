/*
 * main.c
 *
 *  Created on: Feb 19, 2024
 *      Author: puola
 */


#include <stdio.h>
#include <string.h>
/*array*/
void AddMatrix(void);
void average(void);
void transpose(void);
void inserting(void);
void search(void);
/*string*/
void freq_character(void);
void length_of_string(void);
void reverse_string(void);


int main(){

	/*put the function you want to run*/

	return 0;
}

void AddMatrix(void){

	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int row,col;


	printf("Enter the elements of 1st matrix \n");
	for(row = 0 ; row < 2 ; row++){
		for(col = 0 ; col < 2 ; col++ ){
			printf("Enter a%d%d: ",row+1,col+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[row][col]);
			printf("\n");
			fflush(stdout);
		}
	}



	printf("Enter the elements of 2nd matrix \n");
	for(row = 0 ; row < 2 ; row++){
		for(col = 0 ; col < 2 ; col++ ){
			printf("Enter b%d%d: ",row+1,col+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&b[row][col]);
			printf("\n");
		}
	}


	for(row = 0 ; row < 2 ; row++){
		for(col = 0 ; col < 2 ; col++ ){
			sum[row][col] = a[row][col] + b[row][col];
		}
	}


	printf("Sum Of Matrix \n");
	for(row = 0 ; row < 2 ; row++){
			for(col = 0 ; col < 2 ; col++ ){
				printf("%0.1f   ", sum[row][col]);

			}
			printf("\n");
		}


}

void average(void){

	double numbers[50],sum=0.0,average;
	int i, numberOfElements;

	printf("enter number of elements : ");

	fflush(stdin);fflush(stdout);

	scanf("%d",&numberOfElements);

	fflush(stdin);fflush(stdout);

	for(i=0;i<numberOfElements;i++){

		printf("enter number : ");

		fflush(stdin);fflush(stdout);

		scanf("%lf",&numbers[i]);

	}

	for(i=0;i<numberOfElements;i++){
		sum += numbers[i];
	}

	average = sum / numberOfElements;

	printf("Average : %lf",average);

}

void transpose(void){

	int numbers[50][50];
	int i,j,row,column;

	printf("enter number of rows and columns : ");

	fflush(stdin);fflush(stdout);

	scanf("%d %d",&row,&column);

	fflush(stdin);fflush(stdout);

	for(i=0;i<row;i++){

		for(j=0;j<column;j++){

			printf("enter element a[%d][%d] : ",i+1,j+1);

			fflush(stdin);fflush(stdout);

			scanf("%d",&numbers[i][j]);

		}
	}

	printf("\n");

	printf("entered matrix \n");

	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d ",numbers[i][j]);
		}
		printf("\n");
	}

	printf("Transpose of matrix \n");

		for(i=0;i<column;i++){
			for(j=0;j<row;j++){
				printf("%d ",numbers[j][i]);
			}
			printf("\n");
		}
}

void inserting(void){
	int numbers[50],i,numberOfElements,temp,loc;

	printf("enter no of elements : ");

	fflush(stdin);fflush(stdout);

	scanf("%d",&numberOfElements);

	for(i=0;i<numberOfElements;i++){
		fflush(stdin);fflush(stdout);
		scanf("%d",&numbers[i]);
	}

	printf("enter the element to be inserted : ");

	fflush(stdin);fflush(stdout);

	scanf("%d",&temp);

	printf("enter the location : ");

	fflush(stdin);fflush(stdout);

	scanf("%d",&loc);

	fflush(stdin);fflush(stdout);

	for(i=numberOfElements;i >= loc; i--){
		numbers[i] = numbers[i-1];
	}

	numbers[loc-1] = temp;

	for(i=0;i<numberOfElements+1;i++){
			printf("%d ",numbers[i]);
		}

}

void search(void){
	int numbers[50],i,numberOfElements,temp;

	printf("enter no of elements : ");

	fflush(stdin);fflush(stdout);

	scanf("%d",&numberOfElements);

	for(i=0;i<numberOfElements;i++){
		fflush(stdin);fflush(stdout);
		scanf("%d",&numbers[i]);
	}

	printf("enter the element to be searched : ");

	fflush(stdin);fflush(stdout);

	scanf("%d",&temp);

	for(i=0;i<numberOfElements;i++){
		if(numbers[i] == temp){
			printf("number found at the location = %d",i+1);
			break;
		}
	}

}

void freq_character(void){
	char string[100],letter;
	int counter=0,i;

	printf("Enter a String: ");

	fflush(stdin);fflush(stdout);

	fgets(string, 100, stdin);

	printf("Enter a character to find frequency: ");

	fflush(stdin);fflush(stdout);

	scanf("%c",&letter);

	fflush(stdin);fflush(stdout);

	for(i=0;i<strlen(string);i++){
		if(string[i] == letter ){
			counter++;
		}
	}
	printf("frequency of %c = %d",letter,counter);

}

void length_of_string(void){
	char string[100];
	int counter=0,i=0;

	printf("Enter a String: ");

	fflush(stdin);fflush(stdout);

	fgets(string, 100, stdin);

	fflush(stdin);fflush(stdout);


	do{
		if(string[i] != '\0' ){
			counter++;
		}
		else{break;}
		i++;
	}
	while(1);
	printf("Length of string: %d",counter-1);
}

void reverse_string(void){
	char string[100];
	int i;

	printf("Enter a String: ");

	fflush(stdin);fflush(stdout);

	fgets(string, 100, stdin);

	printf("Reverse string is : ");

	printf("\t");

	for(i=strlen(string);i>=0;i--){
		printf("%c",string[i]);
	}


}
