/*
 ============================================================================
 Name        : PatternVerPyraSimple.c
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
	printf("Enter the limit: ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		for(j=1;j<=i;j++){
			if(j<2){
				printf("%d",i);
			}else{
				printf("*%d",i);
			}
		}
		printf("\n");
	}
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			if(j<2){
				printf("%d",i);
			}else{
				printf("*%d",i);
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
