/*
 * main.c
 *
 *  Created on: Apr 10, 2024
 *      Author: puola
 */

#include <stdio.h>

#define area_circle_calculator(r) 3.1415*r*r

void enter_information();
void add_distance();
void add_complex_number();
void enter_information_school();
void area_circle();


int main(){

	area_circle();

	return 0;
}


void enter_information(){

	struct student{
		char name[20];
		unsigned char rollnumber;
		float marks;
	}Sstudent;

	printf("Enter information of students: \n");

	printf("Enter name: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",&Sstudent.name);

	printf("Enter roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Sstudent.rollnumber);

	printf("Enter marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&Sstudent.marks);

	printf("Displaying Information \n");
	printf("name: %s \n",Sstudent.name);
	printf("roll number: %d \n",Sstudent.rollnumber);
	printf("marks: %0.2f \n",Sstudent.marks);
}

void add_distance(){
	struct distance{
		unsigned int feet;
		float inch;
	}Sdistance_1,Sdistance_2,Ssum;

	printf("Enter information for 1st distance: \n");

	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Sdistance_1.feet);

	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&Sdistance_1.inch);

	printf("Enter information for 2nd distance: \n");

	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Sdistance_2.feet);

	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&Sdistance_2.inch);

	Ssum.inch = Sdistance_1.inch + Sdistance_2.inch;
	Ssum.feet = Sdistance_1.feet + Sdistance_2.feet;
	if(Ssum.inch >= 12){
		Ssum.inch -= 12.0;
		Ssum.feet++;
	}

	printf("Sum of distance is: %d'-%0.1f\"",Ssum.feet,Ssum.inch);
}

void add_complex_number(){
	struct complexNumber{
		float real;
		float img;
	}Snumber_1,Snumber_2,Ssum;

	printf("Enter 1st complex number: \n");

	printf("Enter real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&Snumber_1.real);

	fflush(stdin);fflush(stdout);
	scanf("%f",&Snumber_1.img);

	printf("Enter 2nd complex number: \n");

	printf("Enter real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&Snumber_2.real);

	fflush(stdin);fflush(stdout);
	scanf("%f",&Snumber_2.img);

	Ssum.real = Snumber_1.real + Snumber_2.real;
	Ssum.img = Snumber_1.img + Snumber_2.img;

	printf("Sum = %0.2f + %0.2fi",Ssum.real,Ssum.img);
}

void enter_information_school(){

	struct student{
		char name[20];
		unsigned char rollnumber;
		float marks;
	}Sstudent[3];

	int i=0;

	printf("Enter information of students: \n");
	printf("\n");

	for(;i<3;i++){
		printf("For roll number %d\n",i+1);
		printf("Enter name: ");
		fflush(stdin);fflush(stdout);
		scanf("%s",&Sstudent[i].name);

		printf("Enter marks: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&Sstudent[i].marks);

		printf("\n");

		Sstudent[i].rollnumber = i + 1;
	}

	printf("Displaying Information of students \n");
	printf("\n");

	for(i=0;i<3;i++){
		printf("Information for roll number %d:\n",Sstudent[i].rollnumber);
		printf("name: %s \n",Sstudent[i].name);
		printf("marks: %0.2f \n",Sstudent[i].marks);
	}
}

void area_circle(){
	float radius=0,area=0;
	printf("Enter the radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);
	area = area_circle_calculator(radius);
	printf("Area=%0.2f",area);
}



