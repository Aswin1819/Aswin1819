/*
 ============================================================================
 Name        : IncomeTax.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void minIncome(float);
void medIncome(float);
void maxIncome(float);
int main(void) {
	float ai;
	printf("Enter the annual income:");
	scanf("%f",&ai);
	if(ai<250000){
		printf("No Tax");
	}else if(ai>=250000&&ai<=500000){
		minIncome(ai);
	}
	else if(ai>500000&&ai<=1000000){
		medIncome(ai);
	}else if(ai>1000000&&ai<=5000000){
		maxIncome(ai);
	}else{
		printf("Invalid Entry");
	}
	return EXIT_SUCCESS;
}
void minIncome(float ai){
	float inctax;
	inctax=(ai*5)/100;
	printf("%f",inctax);
}
void medIncome(float ai){
	float inctax;
	inctax=(ai*20)/100;
	printf("%f",inctax);
}
void maxIncome(float ai){
	float inctax;
	inctax=(ai*30)/100;
	printf("%f",inctax);
}
