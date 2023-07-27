/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main() {
	float elements[2][2],mat2[2][2],result[2][2];
	int i,j;
	printf("Enter all elements of 1st matrix \n");
	for (i=0;i<=1;i++){
		for (j=0;j<=1;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&elements[i][j]);
		}
	}
	printf("Enter all elements of 2nd matrix \n");
	for (i=0;i<=1;i++){
		for (j=0;j<=1;j++){
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&mat2[i][j]);
		}
	}
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			result[i][j]=elements[i][j]+mat2[i][j];
			printf("%.1f \t",result[i][j]);
		}
		printf("\n");
	}

}
