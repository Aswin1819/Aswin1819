/*
 ============================================================================
 Name        : StringLengthOddEve.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int i,j,s,n;
	char str[50];
	printf("Enter the word: ");
	scanf("%s",str);
	s=strlen(str);

	for(i=0;i<7;i++){
		if(s%2!=0){
			for(j=0;j<7;j++){
				if(i==j||i+j==6){
					printf("X ");

				}else{
					printf(" ");
				}
			}
			printf("\n ");
		}else{
			for(j=0;j<8;j++){
				if(i==j||i+j==7){
					printf("X ");
				}else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
