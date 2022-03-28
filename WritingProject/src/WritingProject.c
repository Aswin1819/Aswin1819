/*
 ============================================================================
 Name        : WritingProject.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE * fpointer =fopen("AnnualSum.txt","a");
	fprintf( fpointer,"\nJacky,Fighter\nSmith,Allrounder");
	fclose(fpointer);
	return 0;
}
