/*
 ============================================================================
 Name        : PatternSimple3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,k,j,o=0;
	for(i=1;i<=5;i++){
		for(j=10;j>o;j--){

			printf("*");
		}
		o+=2;
		printf("\n");
		for(k=1;k<=i;k++){
			printf("*\n");

		}
	}
	return EXIT_SUCCESS;
}
