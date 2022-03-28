/*
 ============================================================================
 Name        : PatternHalfPyramidNumber.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d",k);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
