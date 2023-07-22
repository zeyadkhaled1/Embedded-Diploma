/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main() {
	float x, y,z;
	char op;
	printf("Enter operator either + or - or * or divide :");
	fflush(stdout);
	scanf("%c", &op);
	printf("Enter two operands:");
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	switch(op){
	case '+':
	{
		z=x+y;
	}
	break;
	case '-':
	{
		z=x-y;
	}
	break;
	case '*':
	{
		z=x*y;
	}
	break;
	case '/':
	{
		z=x/y;
	}
	break;
	}
	printf("%.1f - %.1f = %.1f",x,y,z);
}
