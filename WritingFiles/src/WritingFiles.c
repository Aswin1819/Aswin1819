/*
 ============================================================================
 Name        : WritingFiles.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char line[255];
	FILE * Wpointer = fopen("AnnualSum.txt","r");
	fgets(line,255,Wpointer);
	fgets(line,255,Wpointer);
	fgets(line,255,Wpointer);
	fgets(line,255,Wpointer);
	printf("%s",line);

	fclose(Wpointer);

	return 0;
}
