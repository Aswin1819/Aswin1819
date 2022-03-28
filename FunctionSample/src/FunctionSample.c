/*
 ============================================================================
 Name        : FunctionSample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>
#include<stdlib.h>
void getArray(int[],int );
void displayArray(int[],int);
int main(void){
	int arr[30],n;
	printf("Enter the liimit:");
	scanf("%d",&n);
	getArray(arr,n);
	displayArray(arr, n);

	return EXIT_SUCCESS;

}

void getArray(int arr ,int n){
	int i;
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void displayArray(int arr, int n){
	int i;
	printf("Values of array are :");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);

	}
}

