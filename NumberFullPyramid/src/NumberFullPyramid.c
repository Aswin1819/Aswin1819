/*
 ============================================================================
 Name        : NumberFullPyramid.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rows=5,s,r,k;
	for(r=1;r<=rows;r++){
		for(s=1;s<=rows-r;s++){
			printf(" ");

		}
		for(k=1;k<=rows;k++){
			printf("%d ",r);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
