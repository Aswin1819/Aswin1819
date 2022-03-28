/*
 ============================================================================
 Name        : 2FullPytamidOfStar.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rows,i,j,k=0;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++,k=0){
		for(j=1;j<=rows-i;j++){
			printf(" ");

		}
		while(k!=2*i-1){
			printf("*");
			++k;
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
