/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: PCM
 */
#include "stdio.h"
#include <string.h>


void main(){
	char alph[27],rev[27];
	char* p;
	int i;
	printf("Input a string :");
	fflush(stdout);
	gets(alph);
	p=alph+strlen(alph)-1;
	for(i=0;i<strlen(alph);i++){
		rev[i]=*p;
		p--;
	}
	rev[i]=0;
	printf("Reverse of the string is : %s",rev);
	fflush(stdout);
}





