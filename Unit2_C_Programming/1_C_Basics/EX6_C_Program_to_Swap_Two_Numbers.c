/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main()
{
	float a,b,c;
	printf("Enter value of a :");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("After Swapping , value of a: %.2f \n",a);
	fflush(stdout);
	printf("After Swapping , value of b: %.2f",b);
}
