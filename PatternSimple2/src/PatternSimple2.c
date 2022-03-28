/*
 ============================================================================
 Name        : PatternSimple2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,k,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=3*i;j++){
			printf("*");
		}
		if(i<=2){
			for(k=1;k<=3*i;k++){
				printf("\n*");
			}
			printf("\n");
		}
	}
	return EXIT_SUCCESS;
}
