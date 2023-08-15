/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: PCM
 */
#include "stdio.h"
#include <string.h>

union U_job
{
	char name [32] ;
	float salary;
	int worker_no;

} U_union;

struct S_job
{
	char name [32];
	float salary;
	int worker_no;

} S_structure;


int main ()
{
	printf ("Size of the union is: %d", sizeof (U_union));
	printf ("\nSize of the structure is: %d", sizeof (S_structure));

	return 0;
}
