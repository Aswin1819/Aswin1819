/*
 ============================================================================
 Name        : MultiplicationTable.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,limit=10,i;
	printf("Which number you want to multiply :");
	scanf("%d",&num);
	for(i=1;i<=limit;i++){
		printf("%d x %d = %d \n",i,num,i*num);


	}




	return EXIT_SUCCESS;
}
