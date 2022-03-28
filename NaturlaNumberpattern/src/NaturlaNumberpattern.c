/*
 ============================================================================
 Name        : NaturlaNumberpattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,j,k=1;
	printf("Enter the limti of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++,k++){
			printf("%d ",k);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
