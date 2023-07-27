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
	int i,counter=0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(text);
	for (i=0;i<100;i++){
			if(text[i]==0){
				break;
			}
			++counter;
	}
	printf("Length of string: %d",counter);

}
