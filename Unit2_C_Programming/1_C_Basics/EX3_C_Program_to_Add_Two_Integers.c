/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main()
{
	int x,y;
	printf("Enter two integers:");
	fflush(stdout);
	scanf("%d",&x);
	scanf("%d",&y);
	printf("sum %d",x+y);
}
