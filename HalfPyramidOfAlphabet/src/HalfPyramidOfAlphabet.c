/*
 ============================================================================
 Name        : HalfPyramidOfAlphabet.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char input,alphabet='A';
	int i,j;
	printf("Enter an uppercase character you want to print in the last row : ");
	scanf("%c",&input);
	for(i=1;i<=(input-'A'+1);i++){
		for(j=1;j<=i;j++){
			printf("%c ",alphabet);
		}
		alphabet++;
		printf("\n");

	}
	return EXIT_SUCCESS;
}
