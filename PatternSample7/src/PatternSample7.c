/*
 ============================================================================
 Name        : PatternSample7.c
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
		if(i==1){
			set=0;
		}else{
			set=3;
		}
		for(j=1;j<=set;j++){
			printf("*");
			printf("\n");

		}
		for(k=1;k<=i;k++){
			for(l=1;l<=i*3;l++){
				printf("*");
			}
			printf("\n");
		}
	}
	return EXIT_SUCCESS;
}
