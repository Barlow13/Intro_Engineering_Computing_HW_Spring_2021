/*  Name:		Brady Barlow	*/
/*  Date:		04/01/21		*/
/*  Today:		Thursday			*/
/*  Assignment:	Lab9a		*/

#include <stdio.h>
#include <math.h>

#define NROWS 3
#define NCOLS 4

int main(void) {
	int A[NROWS][NCOLS] = {{2,  3, -1, 4},
	                       {8,  7, 0,  5},
	                       {-2, 9, 10, -3}};
	int B[NROWS][NCOLS] = {{7, 8,  -1, 4},
	                       {8, 0,  0,  -8},
	                       {2, 11, 9,  -13}};
	int i, j;
	printf("A = \n");
	for (i = 0; i < NROWS; i++) {
		for (j = 0; j < NCOLS; j++) {
			printf("%4d ", A[i][j]);
		}
		printf("\n");
	}
	printf("B = \n");
	for (i = 0; i < NROWS; i++) {
		for (j = 0; j < NCOLS; j++) {
			printf("%4d ", B[i][j]);
		}
		printf("\n");
	}
	printf("A + B = \n");
	for (i = 0; i < NROWS; i++) {
		for (j = 0; j < NCOLS; j++) {
			printf("%4d ", A[i][j] + B[i][j]);
		}
		printf("\n");
	}
	return 0;
}
