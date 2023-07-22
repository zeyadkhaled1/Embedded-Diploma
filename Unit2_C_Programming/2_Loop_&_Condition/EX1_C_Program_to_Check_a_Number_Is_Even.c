/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main()
{
	int a;
	printf("Enter an integer you want to check:");
	fflush(stdout);
	scanf("%d",&a);
	if (a%2 == 0)
		printf("%d is even",a);
	else
		printf("%d is odd",a);
}
