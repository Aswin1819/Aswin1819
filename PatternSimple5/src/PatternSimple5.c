/*
 ============================================================================
 Name        : PatternSimple5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,k,j,r=1;
	for(i=1;i<=3;i++){
		for(j=1;j<=2*i;j++){
			printf("*");
		}
		printf("\n");
		for(k=1;k<=r;k++){
			printf("*\n");
		}
		r+=2;

	}

	return EXIT_SUCCESS;
}
