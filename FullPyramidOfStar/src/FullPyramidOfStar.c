/*
 ============================================================================
 Name        : FullPyramidOfStar.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rows,i,k,j;
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");

		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
