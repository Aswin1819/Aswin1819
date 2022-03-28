/*
 ============================================================================
 Name        : PatternSimple14.c
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
	for(i=1;i<=4;i++){
		for(j=1;j<=1;j++){
			printf("*\n");

		}
		for(j=1;j<=i;j++){
			for(k=1;k<=3;k++){
				printf("* ");

			}
			printf("\n");
		}
	}
	return EXIT_SUCCESS;
}
