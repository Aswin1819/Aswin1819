/*
 ============================================================================
 Name        : MatrixDiagonal.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,a[3][3];
	int r,c;
	setbuf(stdout,NULL);
	printf("Enter the limit of Rows and Columns:");
	scanf("%d%d",&r,&c);
	printf("Enter the Elements \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j){
				printf("%d ",a[i][j]);
			}
			    printf("\n");

			}


			}

	return EXIT_SUCCESS;
}
