/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main()
{
	int n,sum=0;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&n);
	for (int i=1;i<n+1;i++){
		sum+=i;
	}
	printf("Sum = %d",sum);
}
