/*
 ============================================================================
 Name        : PatternSample3.c
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
	for(i=1;i<=3;i++){
		for(j=1;j<=i;j++){
			printf("*\n");
		}
		for(k=1;k<=i*4;k++){
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
