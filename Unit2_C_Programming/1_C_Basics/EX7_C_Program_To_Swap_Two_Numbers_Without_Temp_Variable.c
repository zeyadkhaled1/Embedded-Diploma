/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main()
{
	float a,b;
	printf("Enter value of a :");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("After Swapping , value of a: %.2f \n",a);
	fflush(stdout);
	printf("After Swapping , value of b: %.2f",b);
}
