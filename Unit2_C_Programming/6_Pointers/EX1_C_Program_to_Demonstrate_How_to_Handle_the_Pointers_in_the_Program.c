/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: PCM
 */
#include "stdio.h"
#include <string.h>


void main(){
	int m=29;
	int* ab;
	printf("Address of m : %p\n",&m);
	fflush(stdout);
	printf("Value of m :%d\n",m);
	fflush(stdout);
	ab=&m;
	printf("Address of pointer ab :%p\n",ab);
	fflush(stdout);
	printf("Content of pointer ab :%d\n",*ab);
	fflush(stdout);
	m=34;
	printf("Address of pointer ab :%p\n",ab);
	fflush(stdout);
	printf("Content of pointer ab :%d\n",*ab);
	fflush(stdout);
	*ab=7;
	printf("Address of m:%p\n",&m);
	fflush(stdout);
	printf("Value of m :%d\n",m);
	fflush(stdout);



}





