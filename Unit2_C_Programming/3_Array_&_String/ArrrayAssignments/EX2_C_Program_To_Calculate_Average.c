/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main() {
	float elements[100],sum=0;
	int number,i;
	printf("Enter the number of data: ");
	fflush(stdout);
	scanf("%d",&number);
	for (i=0;i<number;i++){
		printf("%d.Enter number:",i+1);
		fflush(stdout);
		scanf("%f",&elements[i]);
		sum+=elements[i];
	}
	printf("Average = %.2f",sum/i);

}
