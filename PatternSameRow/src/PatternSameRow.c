/*
 ============================================================================
 Name        : PatternSameRow.c
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
		for(j=1;j<=5;j++){
			printf("%d ",i);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}

/*1 1 1 1 1
  2 2 2 2 2
  3 3 3 3 3
  4 4 4 4 4
  5 5 5 5 5 */
