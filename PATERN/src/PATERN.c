/*
 ============================================================================
 Name        : PATERN.c
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
		for(j=1;j<=i;j++){
			for(k=1;k<=2;k++){
				printf("X ");
			}
			printf("\n\n");

		}


			for(j=1;j<=i;j++){
				printf("_ ");
			}
				for(k=1;k<=i*2;k++){
					printf("X ");
				}

			printf("\n\n");


	}
	return EXIT_SUCCESS;
}
