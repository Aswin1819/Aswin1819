/*
 ============================================================================
 Name        : Decimal2Binary.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	convert(n);
	return EXIT_SUCCESS;
}
void convert(int n){
	int ar[20],i,r;
	for(i=0;n!=0;i++){
		r=n%2;
		ar[i]=r;
		n=n/2;
	}
	for( i=i-1;i>=0;i--){
		printf("%d",ar[i]);
	}
}
