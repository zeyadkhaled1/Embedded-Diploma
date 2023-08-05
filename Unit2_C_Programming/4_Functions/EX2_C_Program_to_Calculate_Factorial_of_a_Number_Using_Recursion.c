/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"
int getfactorial(int x);

void main() {
	int input,result;
	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%d",&input);
	result=getfactorial(input);
	printf("Factorial of %d = %d",input,result);
}

int getfactorial(int x){
	if (x != 1)
		return x*getfactorial(x-1);
}
