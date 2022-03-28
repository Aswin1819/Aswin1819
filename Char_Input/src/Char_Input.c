/*
 ============================================================================
 Name        : Char_Input.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name;
	printf("Enter a character : ");
	scanf("%c",&name);
	printf("You have entered %c ",name);

	return EXIT_SUCCESS;
}
