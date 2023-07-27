/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"
#include "string.h"

void main() {
	char text[100];
	char reverse[100];
	int i,counter=0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(text);
	for (i=strlen(text)-1;i>=0;i--){
		reverse[counter]=text[i];
		counter++;
	}
	reverse[counter]=0;
	printf("Reverse string is: %s",reverse);

}
