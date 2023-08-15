/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: PCM
 */
#include "stdio.h"
#include <string.h>


struct Sstudent
{
	char name [50];
	int roll;
	int marks;

};



int main ()
{
	struct Sstudent arr[10];
	int i;
	printf("Enter information of students:\n");
	fflush(stdout);
	for (i=1;i<=10;i++){
		arr[i-1].roll=i;
		printf("For roll number %d \n",i);
		fflush(stdout);
		printf("Enter name:");
		fflush(stdout);
		scanf("%s",arr[i-1].name);
		printf("Enter marks: ");
		fflush(stdout);
		scanf("%d",&arr[i-1].marks);
	}
	printf("Displaying information of students:\n");
	fflush(stdout);
	  for (i = 1; i <= 10; i++) {
	        printf("Information for roll number %d\n", i);
	        fflush(stdout);
	        printf("Name: %s\n", arr[i].name);
	        fflush(stdout);
	        printf("Marks: %d\n", arr[i].marks);
	    }


	return 0;
}
