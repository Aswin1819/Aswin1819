/*
 ============================================================================
 Name        : PatternSimple8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,l,set;
	for(i=1;i<=3;i++){
		if(i==1)
			set=0;
		else
			set=3;

		for(j=1;j<=set;j++){
			printf("X ");
			printf("\n");
		}
		for(k=i;k<=i+1;k++){
			for(l=4;l>=i;l--){
				printf("X ");
			}
			printf("\n");
		}
	}

	return EXIT_SUCCESS;
}
