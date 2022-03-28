/*
 ============================================================================
 Name        : RecursiveMethod.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=4,sum;
	sum=display(a);
	printf("%d",sum);
	return EXIT_SUCCESS;//Factoeial of number
}

int display(int a){
	if(a==0)
		return 0;
	else if(a==1)
		return 1;
	else{
		return a*display(a-1);
	}
}
