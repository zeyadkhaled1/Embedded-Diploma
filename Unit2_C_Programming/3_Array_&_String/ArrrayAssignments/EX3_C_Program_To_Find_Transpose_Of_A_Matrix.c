/*
 * main.c
 *
 *  Created on: Jul 14, 2023
 *      Author: PCM
 */

#include "stdio.h"

void main() {
	int mat[100][100];
	int r,c,i,j;
	printf("Enter Rows and Column of matrix:");
	fflush(stdout);
	scanf("%d",&r);
	scanf("%d",&c);
	printf("Enter elements of matrix:\n");
	fflush(stdout);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter elements a%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("Entered Matrix:\n");
	for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d\t",mat[i][j]);
				fflush(stdout);
			}
			printf("\n");
			fflush(stdout);
		}
	printf("Transpose Matrix:\n");
	for(i=0;i<c;i++){
			for(j=0;j<r;j++){
				printf("%d\t",mat[j][i]);
				fflush(stdout);
			}
			printf("\n");
			fflush(stdout);
		}


}
