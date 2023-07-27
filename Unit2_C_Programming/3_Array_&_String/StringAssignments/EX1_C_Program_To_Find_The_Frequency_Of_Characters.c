/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"
#include "string.h"

void main() {
	char text[100],freq;
	int i,counter=0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(text);
	printf("Enter a character to find frequency:");
	fflush(stdout);
	scanf("%c",&freq);
	for (i=0;i<strlen(text);i++){
			if(text[i]==freq){
				counter+=1;
			}
	}
	printf("Frequency of %c is %d",freq,counter);

}
