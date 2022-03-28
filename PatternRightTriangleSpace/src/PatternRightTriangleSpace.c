/*
 ============================================================================
 Name        : PatternRightTriangleSpace.c
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
		for(j=1;j<=i;j++){
			if(i==5||j==1||i==j){
				printf("* ");

			}else{
				printf("  ");
			}

		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
