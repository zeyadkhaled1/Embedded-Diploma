/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: PCM
 */
#include "stdio.h"
#include <string.h>


void main(){
	int arr[15];
	int* p;
	int x,i;
	printf("Input the number of elements to store in the array (max 15) :");
	fflush(stdout);
	scanf("%d",&i);
	printf("Input %d number of elements in the array:\n",i);
	fflush(stdout);
	for (x=0;x<i;x++){
		printf("element-%d:",x+1);
		fflush(stdout);
		scanf("%d",&arr[x]);
	}
	p=arr+i-1;
	for (x=i;x>0;x--){
		printf("element-%d : %d\n",x,*p);
		fflush(stdout);
		p--;
	}
}





