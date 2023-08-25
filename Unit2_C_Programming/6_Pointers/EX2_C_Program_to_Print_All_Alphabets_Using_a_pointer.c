/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: PCM
 */
#include "stdio.h"
#include <string.h>


void main(){
	char alph[27];
	int x;
	char* ptr;
	ptr=alph;
	for(x=0;x<26;x++){
		*ptr=x+'A';
		ptr++;
	}
	ptr=alph;
	for (x=0;x<26;x++){
		printf("%c",*ptr);
		ptr++;
	}
}





