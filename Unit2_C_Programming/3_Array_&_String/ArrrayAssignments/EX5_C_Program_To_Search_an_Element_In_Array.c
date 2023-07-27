/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main() {
	int arr[100],n,i,es,l;
	printf("Enter no of elements : ");
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		arr[i]=(i+1)*11;
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Enter the element to be searched :");
	fflush(stdout);
	scanf("%d",&es);
	for(i=0;i<n;i++){
		if (arr[i] == es){
			printf("Number found at location %d",i+1);
		}
	}

}
