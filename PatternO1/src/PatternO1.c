/*
 ============================================================================
 Name        : PatternO1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n;
	printf("Enter the numbet of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}



	return EXIT_SUCCESS;
}
