/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"
int checkprime(int x);

void main() {
	int x,y,i,flag;
	printf("Enter two numbers(intervals): ");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Prime numbers between 10 and 30 are: ");
	fflush(stdout);
	for(i=x;i<=y;i++){
		flag=checkprime(i);
		if (!flag)
		{
			printf("%d ",i);
			fflush(stdout);
		}
	}
}

int checkprime(int x){
	int i,flag=0;
	for(i=2;i<x;i++){
		if(x%i == 0)
			{
				flag=1;
				break;
			}
	}
	return flag;
}
