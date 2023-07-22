/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main()
{
	float a,b,c;
	printf("Enter three numbers:");
	fflush(stdout);
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	printf("%.2f",(a>b)?(a>c)?a:c:(b>c)?b:c);
}
