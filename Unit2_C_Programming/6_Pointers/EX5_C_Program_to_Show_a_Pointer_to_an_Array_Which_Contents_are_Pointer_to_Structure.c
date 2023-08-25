/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: PCM
 */
#include "stdio.h"
#include <string.h>

struct Semployee{
	char name[10];
	int id;
};

void main(){
	struct Semployee manger={"Alex",1002};
	struct Semployee* arr[1]={&manger};
	struct Semployee* (* ptr) [5];
	ptr=arr;
	printf("Employee Name : %s\n",(**(*ptr)) . name);
	fflush(stdout);
	printf("Employee ID : %d",(*(*ptr)) -> id);
	fflush(stdout);
}





