/*
 ============================================================================
 Name        : WeightedAverage.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float wt,lexm,asnmt,grade;
	printf("Enter the marks scored\n\n");
	printf("Written test = ");
	scanf("%f",&wt);
	printf("\nLab exams = ");
	scanf("%f",&lexm);
	printf("\nAssignments =");
	scanf("%f",&asnmt);
	grade=(wt*70)/100+(lexm*20)/100+(asnmt*10)/100;
	printf("\nGrade of the student is %f ",grade);
	return EXIT_SUCCESS;
}
