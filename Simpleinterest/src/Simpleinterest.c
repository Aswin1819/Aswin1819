/*
 ============================================================================
 Name        : Simpleinterest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p;
	float r,n,si;
	printf("Enter principle amount: \nEnter Interest rate : \nEnter Number of years : ");
	scanf("%d%f%f",&p,&r,&n);
	si=(p*r*n)/100;
	printf("Simple Interest :%f",si);

	return EXIT_SUCCESS;
}
