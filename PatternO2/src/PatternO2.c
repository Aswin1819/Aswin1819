/*
 ============================================================================
 Name        : PatternO2.c
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
	printf("Enter the number of rows:");
	scanf("%d",&n);

	for(i=0;i<=n;i++){
	   for(j=1;j<=n-i;j++)
	   {
			printf("%d ",j);

	}
		printf("\n");
}
	return EXIT_SUCCESS;
}
