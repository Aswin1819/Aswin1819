/*
 ============================================================================
 Name        : MatrixRowSum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,a[3][3],sum=0,r,c;
	printf("Enter the Limits of Row and Column: ");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of matrix: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				sum=sum+a[i][j];
			}
		}
	printf("Sum of row of matrix is %d",sum);

	return EXIT_SUCCESS;
}
