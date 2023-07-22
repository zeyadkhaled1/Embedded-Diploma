/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main()
{
	float a;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%f",&a);
	if(a == 0)
		printf("You entered zero");
	else if (a > 0)
		printf("%.2f is positive",a);
	else
		printf("%.2f is negative",a);
}
