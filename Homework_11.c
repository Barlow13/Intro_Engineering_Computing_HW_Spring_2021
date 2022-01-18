/*  Name:		Brady Barlow	*/
/*  Date:		04/27/21		*/
/*  Today:		Tuesday		    */
/*  Assignment:	Homework 11	    */

#include <stdio.h>
#include <math.h>

#define FILENAME  "mata.txt"
#define FILENAME2 "matb.txt"
#define FILENAME3 "vecta.txt"
#define FILENAME4 "vectb.txt"

#define NROWS 3
#define NCOLS 3
#define N 10

#include "function_lib.h"


int main(void) {
	/* Declare Variables */
	int data1, data2, i, Choice, index, j;
	double value;
	char ans;
	FILE *mata;
	FILE *matb;
	FILE *vecta;
	FILE *vectb;
	mata = fopen(FILENAME, "r");
	matb = fopen(FILENAME2, "r");
	vecta = fopen(FILENAME3, "r");
	vectb = fopen(FILENAME4, "r");
	int mataA[NROWS][NCOLS], matbA[NROWS][NCOLS], mataAt[NROWS][NCOLS], addA[NROWS][NCOLS], subA[NROWS][NCOLS], multiA[NROWS][NCOLS];
	int vectaA[N], vectbA[N];
	for (i = 0; i < NROWS; i++) {
		for (j = 0; j < NCOLS; j++) {
			fscanf(mata, "%d", &mataA[i][j]);
		}
	}
	for (i = 0; i < NROWS; i++) {
		for (j = 0; j < NCOLS; j++) {
			fscanf(matb, "%d", &matbA[i][j]);
		}
	}
	fscanf(vecta, "%d", &data1);
	fscanf(vectb, "%d", &data2);
	for (i = 0; i < data1; ++i) {
		fscanf(vecta, "%d", &vectaA[i]);
	}
	for (i = 0; i < data2; ++i) {
		fscanf(vectb, "%d", &vectbA[i]);
	}
	do {
		printf("\nPLEASE CHOOSE THE OPERATION\n");
		printf("1. Transpose a 2D matrix\n");
		printf("2. Dot Product of two vectors\n");
		printf("3. Addition of two 2D matrices\n");
		printf("4. Subtraction of two 2D matrices\n");
		printf("5. Multiplication of two 2D matrices\n");
		printf("6. Determinants of two 2D matrices\n");
		printf("7. EXIT\n");
		printf("Your choice is : ");
		scanf("%d", &Choice);
		while (Choice > 7 || Choice < 1) {
			Choice = 8;
		}
		switch (Choice) {
			case 1:
				printf("\nThe matrix is :\n");
				printmat(mataA);
				transpose(mataA, mataAt);
				printf("The transpose matrix is :\n");
				printmat(mataAt);
				printf("\nDo you want more operation (Y/N)?");
				scanf(" %c", &ans);
				break;
			case 2:
				printf("\nDot product is %d", dot_product(vectaA, vectbA, N));
				printf("\nDo you want more operation (Y/N)?");
				scanf(" %c", &ans);
				break;
			case 3:
				printf("\nA =\n");
				printmat(mataA);
				printf("\nB =\n");
				printmat(matbA);
				printf("\nA + B =\n");
				add(mataA, matbA, addA);
				printmat(addA);
				printf("\nDo you want more operation (Y/N)?");
				scanf(" %c", &ans);
				break;
			case 4:
				printf("\nA =\n");
				printmat(mataA);
				printf("\nB =\n");
				printmat(matbA);
				printf("\nA - B =\n");
				sub(mataA, matbA, subA);
				printmat(subA);
				printf("\nDo you want more operation (Y/N)?");
				scanf(" %c", &ans);
				break;
			case 5:
				printf("\nA =\n");
				printmat(mataA);
				printf("\nB =\n");
				printmat(matbA);
				printf("\nA X B =\n");
				matrix_mult(mataA, matbA, multiA);
				printmat(multiA);
				printf("\nDo you want more operation (Y/N)?");
				scanf(" %c", &ans);
				break;
			case 6:
				printf("\nA =\n");
				printmat(mataA);
				printf("\nDeterminant : %d\n", det3by3(mataA));
				printf("\nB =\n");
				printmat(matbA);
				printf("\nDeterminant : %d\n", det3by3(matbA));
				printf("\nDo you want more operation (Y/N)?");
				scanf(" %c", &ans);
				break;
			case 7:
				printf("\nBYE !\n");
				ans = 'N';
				break;
			case 8:
				printf("\n");
				ans = 'Y';
				break;
		}
	} while ((ans == 'Y' || ans == 'y') && (ans != 'N' || ans != 'n'));
	fclose(mata);
	fclose(matb);
	fclose(vecta);
	fclose(vectb);
	return 0;
}



