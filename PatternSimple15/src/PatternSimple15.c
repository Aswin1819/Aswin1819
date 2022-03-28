/*
 ============================================================================
 Name        : PatternSimple15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=i*5;j++){
			printf("* ");
		}
		printf("\n");
		for(j=1;j<=i*2;j++){
			printf("*\n");
		}
	}
	return EXIT_SUCCESS;
}
