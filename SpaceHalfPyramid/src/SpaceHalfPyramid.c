/*
 ============================================================================
 Name        : SpaceHalfPyramid.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=5,i,j,k;
	for(i=1;i<=a;i++){
		for(j=1;j<=a-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("*");

		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
