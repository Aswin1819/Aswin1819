/*
 ============================================================================
 Name        : PatternO4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,n;
	printf("Enter the numbet of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			printf("  ");
		}
		for(k=1;k<=i;k++){
			printf("%d ",k);
		}
		for(k=1;k<i;k++){
			printf("%d ",k);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
