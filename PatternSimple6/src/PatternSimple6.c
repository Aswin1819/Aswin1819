/*
 ============================================================================
 Name        : PatternSimple6.c
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
	for(i=1;i<=18;i++){
		printf("*");


		if(i==1||i==9){
			for(j=1;j<5;j++){
				printf("*");
			}

		}else if(i==4||i==18){
			for(k=1;k<10;k++){
				printf("*");
			}

		}
		printf("\n");
	}
	printf("\n");

	return EXIT_SUCCESS;
}
