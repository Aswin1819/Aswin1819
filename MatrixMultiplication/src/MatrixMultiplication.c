/*
 ============================================================================
 Name        : MatrixMultiplication.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m,n,i,j,p,q,a[29][44],b[33][33],c[44][44],k;

	printf("Enter the order for first matrix ");
	scanf("%d%d",&m,&n);
	printf("Enter the order for second matrix ");
	scanf("%d%d",&p,&q);
	if(n!=p){
			printf("only m x n , n x p order can be multiply!!!..");

		}else{
			printf("Enter the elements of matrix 1");
				for(i=0;i<m;i++){
					for(j=0;j<n;j++){
						scanf("%d",&a[i][j]);

					}
				}

				printf("Enter the elements of matrix 2");
				for(i=0;i<p;i++){
					for(j=0;j<q;j++){
						scanf("%d",&b[i][j]);
					}
				}



					for(i=0;i<m;i++){
					   for(j=0;j<q;j++){
							c[i][j]=0;

						for(k=0;k<n;k++){
							c[i][j]+=a[i][k]*b[k][j];
						}
						 }
						  }
					for(i=0;i<m;i++){
					for(j=0;j<q;j++){
							printf("%d\t",c[i][j]);
						}
						printf("\n");

					}
		}





	return EXIT_SUCCESS;
}
