/*
 ============================================================================
 Name        : primebrototype.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n=5,i,flag=0;
	for(i=2;i<n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("Prime");

	}else{
		printf("Not prime");
	}
	return EXIT_SUCCESS;
}
