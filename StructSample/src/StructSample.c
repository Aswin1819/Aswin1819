/*
 ============================================================================
 Name        : StructSample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct Student {
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main(void) {
	struct Student student1;
	student1.age =17;
	student1.gpa =3.2;

	strcpy(student1.major,"Fashion");

	printf("%f",&student1.gpa);

	return 0;
}
