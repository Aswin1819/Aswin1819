/*
 ============================================================================
 Name        : new.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void getArray(int[][10],int[][10],int);
void sumArray(int[][10],int[][10],int);
void displayArray(int[][10],int[][10],int);
int main(void) {
int limit,array[10][10],array1[10][10];
setbuf(stdout,NULL);
printf("enter the limit");
scanf("%d",&limit);
getArray(array,array1,limit);
sumArray(array,array1,limit);
displayArray(array,array1,limit);

return EXIT_SUCCESS;
}
void getArray(int array[][10],int array1[][10],int limit)
{
int i,j;
printf("enter the first array elements");
for(i=0;i<limit;i++){
for(j=0;j<limit;j++)
{
scanf("%d",&array[i][j]);
}
}
printf("enter the second array elements");
for(i=0;i<limit;i++){
for(j=0;j<limit;j++)
{
scanf("%d",&array1[i][j]);
}
}

}
void sumArray(int array[][10],int array1[][10],int limit)
{
int i,j,array3[10][10];
for(i=0;i<limit;i++){
for(j=0;j<limit;j++)
{
array3[i][j]=array[i][j]+array1[i][j];
}
}
}
void displayArray(int array[][10],int array1[][10],int limit)
{
int i,j,array3[10][10];
printf("sum of the array: \n");
for(i=0;i<limit;i++)
{
for(j=0;j<limit;j++)
{
printf(" %d\t ",array3[i][j]);
}
printf("\n");
}
}
