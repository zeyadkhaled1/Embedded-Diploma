/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: PCM
 */
#include "stdio.h"
#include <string.h>

struct Sdistance{
	int feet;
	float inch;
};

void Sum_distances(struct Sdistance,struct Sdistance);
struct Sdistance read_structure(char order[]);
int main(){
	struct Sdistance distance1,distance2;
	distance1=read_structure("1st");
	distance2=read_structure("2nd");
	Sum_distances(distance1,distance2);

	return 0;
}

void Sum_distances(struct Sdistance d1,struct Sdistance d2){
	float inch_sum=d1.inch + d2.inch;
	int feet_sum =d1.feet + d2.feet;
	if (inch_sum > 12){
		inch_sum -=12;
		feet_sum++;
	}
	printf("Sum of distances=%d'-%.1f",feet_sum,inch_sum);
	fflush(stdout);
}

struct Sdistance read_structure(char order[] ){
	struct Sdistance input;
	printf("Enter information for %s distance\n",order);
	fflush(stdout);
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d",&input.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&input.inch);
	return input;
}
