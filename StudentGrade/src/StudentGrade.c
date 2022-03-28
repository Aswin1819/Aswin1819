/*
 ============================================================================
 Name        : StudentGrade.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float totalmark;
	printf("Enter your total mark :");
	scanf("%f",&totalmark);
	if(totalmark>=90&&totalmark<=100){
		printf("The program");
	}else if(totalmark>=80&&totalmark<90){
		printf("Grade : B");
	}else if(totalmark>=70&&totalmark<80){
		printf("Grade : C");
	}else if(totalmark>=60&&totalmark<70){
		printf("Grade : D");
	}else if(totalmark>=50&&totalmark<60){
		printf("Grade : E");
	}else if(totalmark<50&&totalmark>=0){
		printf("Failed");
	}else{
		printf("Invalid mark input");
	}
	return EXIT_SUCCESS;
}
