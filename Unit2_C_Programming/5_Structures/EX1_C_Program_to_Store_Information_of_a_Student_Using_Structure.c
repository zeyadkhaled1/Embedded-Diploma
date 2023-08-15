/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: PCM
 */
#include "stdio.h"
#include <string.h>

struct Sstudent{
	char name[50];
	int roll;
	float marks;
};

int main(){
	struct Sstudent student;
	printf("Enter information of students:\n");
	fflush(stdout);
	printf("Enter name: ");
	fflush(stdout);
	gets(student.name);
	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d",&student.roll);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f",&student.marks);
	printf("Displaying Information\n");
	fflush(stdout);
	printf("name: %s\n",student.name);
	fflush(stdout);
	printf("Roll: %d\n",student.roll);
	fflush(stdout);
	printf("Marks: %.2f",student.marks);
	fflush(stdout);

	return 0;
}
