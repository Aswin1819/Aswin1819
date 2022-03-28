/*
 ============================================================================
 Name        : MatrixAddition.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int r,c,a[10][10],b[10][10],i,j,sum[10][10];
	printf("Enter the limit of row and coloumn :");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of first matrix: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of second matrix: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Answer is :\n ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
