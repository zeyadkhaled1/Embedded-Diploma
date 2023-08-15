/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: PCM
 */
#include "stdio.h"
#include <string.h>

struct Snumber{
	float real;
	float imaginary;
};

void Sum_distances(struct Snumber,struct Snumber);
struct Snumber read_structure(char order[]);
int main(){
	struct Snumber num1,num2;
	num1=read_structure("1st");
	num2=read_structure("2nd");
	Sum_distances(num1,num2);
	return 0;
}

void Sum_distances(struct Snumber n1,struct Snumber n2){
	float real_sum=n1.real + n2.real;
	float imaginary_sum =n1.imaginary + n2.imaginary;
	printf("Sum=%.1f+%.1fi",real_sum,imaginary_sum);
	fflush(stdout);
}

struct Snumber read_structure(char order[] ){
	struct Snumber input;
	printf("For %s complex number\n",order);
	fflush(stdout);
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f",&input.real,&input.imaginary);
	return input;
}
