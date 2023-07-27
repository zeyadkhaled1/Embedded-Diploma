/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main() {
	int elements[100],n,i,n_i,l;
	printf("Enter no of elements : ");
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		elements[i]=i+1;
		printf("%d ",elements[i]);
	}
	printf("\n");
	printf("Enter the element to be inserted :");
	fflush(stdout);
	scanf("%d",&n_i);
	printf("Enter the location: ");
	fflush(stdout);
	scanf("%d",&l);
	for(i=n;i>=l;i--){
		elements[i]=elements[i-1];
	}
	elements[l-1]=n_i;
	for(i=0;i<=n;i++){
		printf("%d\t",elements[i]);
	}

}
