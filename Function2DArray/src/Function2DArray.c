/*
 ============================================================================
 Name        : Function2DArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void getArray(int[][10],int[][10],int);
void addArray(int[][10],int[][10],int);
void displayArray(int[][10],int[][10],int);
int main(void) {
	int a[10][10],b[10][10];
	int n;
	printf("Enter the order of matrix:");
	scanf("%d",&n);
	getArray(a ,b ,n);
	addArray(a,b,n);
	displayArray(a,b,n);

	return EXIT_SUCCESS;
}
void  getArray(int a[][10],int b[][10],int n){
	int i,j;
	printf("Enter the elements of matrix:");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of matrix 2: ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}

}



}

void displayArray(int a[][10],int b[][10] , int n){
	int i,j,sum[10][10];

	printf("Sum of Matrix :\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf(" %d ",sum[i][j]);
		}
		printf("\n");
	}

}
void addArray(int a[][10],int b[][10], int n){
	int i,j,sum[10][10];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		  sum[i][j]=a[i][j]+b[i][j];

	}

}


}
