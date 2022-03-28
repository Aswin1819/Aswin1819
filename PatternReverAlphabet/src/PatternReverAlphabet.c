/*
 ============================================================================
 Name        : PatternReverAlphabet.c
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
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
			printf("%c ",j+64);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
