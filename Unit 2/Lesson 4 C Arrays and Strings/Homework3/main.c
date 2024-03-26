/*
 * main.c
 *
 *  Created on: Feb 19, 2024
 *      Author: puola
 */


#include <stdio.h>
#include <string.h>

void AddMatrix(void);

int main(){

	double a = 0.7;
	float b = 0.7;

	printf("a = %d \n",a);
	printf("b = %d",b);



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



