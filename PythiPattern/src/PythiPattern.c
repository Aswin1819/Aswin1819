/*
 ============================================================================
 Name        : PythiPattern.c
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
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j>n-i){
				printf("%d ",i);
			}else{
				printf("1 ");
			}


		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
