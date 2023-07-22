/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main()
{
	float x,y;
	printf("Enter two numbers:");
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	printf("Sum: %f",x*y);
}
