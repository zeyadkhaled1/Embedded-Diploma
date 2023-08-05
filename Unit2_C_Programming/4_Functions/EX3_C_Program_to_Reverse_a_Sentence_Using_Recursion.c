/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"
#include "string.h"
void reversestring(int x,char input[]);
void main() {
	int index=0;
	char input[50];
	printf("Enter a sentence: ");
	fflush(stdout);
	gets(input);
	reversestring(index,input);
}

void reversestring(int index,char input[]){
	if (index != strlen(input)-1)
	{
		reversestring(index+1,input);
	}
	printf("%c",input[index]);

}

