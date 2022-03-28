/*
 ============================================================================
 Name        : PatternSimple4.c
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
		for(j=1;j<=i*5;j++){
			printf("*");
		}
		printf("\n");
		if(i<3){
		for(k=1;k<=3*i;k++){
			printf("*\n");
		}


		}

	}
	return EXIT_SUCCESS;
}
