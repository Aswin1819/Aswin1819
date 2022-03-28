/*
 ============================================================================
 Name        : PassOrFail.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	printf("Enter your mark : ");
	scanf("%f",&mark);
	if(mark<50){
		printf("Failed");
	}else{
		printf("Passed");
	}
	return EXIT_SUCCESS;
}
