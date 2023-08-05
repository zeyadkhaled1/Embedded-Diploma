/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"
#include "string.h"

int calculate_power(int x,int y);
void main() {
	int base,power;
	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number(positive integer): ");
	fflush(stdout);
	scanf("%d",&power);
	printf("%d^%d = %d",base,power,calculate_power(base,power));
}

int calculate_power(int base,int power){
	if (power)
	{
		return base*calculate_power(base,power-1);
	}
	return 1;
}

