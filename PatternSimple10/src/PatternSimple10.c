/*
 ============================================================================
 Name        : PatternSimple10.c
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

		for(j=1;j<=2;j++){
			for(k=1;k<=i;k++){
				printf("* ");
			}
			printf("\n");
		}
		for(j=1;j<=i*3;j++){
			printf("* ");
		}
		printf("\n");


	}
	return EXIT_SUCCESS;
}
