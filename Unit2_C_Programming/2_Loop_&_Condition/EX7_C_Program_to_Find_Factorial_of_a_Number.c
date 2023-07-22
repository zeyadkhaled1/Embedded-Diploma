/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main() {
	int n, Factorial = 1;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d", &n);
	if (n > 0) {
		for (int i = 1; i < n + 1; i++) {
			Factorial *= i;
		}
		printf("Factorial = %d",Factorial);
	}
	else if (n == 0)
		printf("Factorial = 1");
	else
		printf("Error!!! Factorial of negative number dosen't exist");
}
