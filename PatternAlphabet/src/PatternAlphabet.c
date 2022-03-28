/*
 ============================================================================
 Name        : PatternAlphabet.c
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
	char alphabet='A';
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%c ",alphabet);
			alphabet++;

		}
		alphabet='A';
		printf("\n");
	}

	return EXIT_SUCCESS;
}

//or//
/*for(i=0;i<5;i++){
 * for(j=0;j<5;j++){
 *     pritnf("%c",j+64);
 *     }
 *     printf("\n");
 *   }
 *    */
