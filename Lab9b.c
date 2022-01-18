/*  Name:		Brady Barlow	*/
/*  Date:		04/01/21		*/
/*  Today:		Thursday			*/
/*  Assignment:	Lab9b		*/

#include <stdio.h>
#include <math.h>

#define NROWS 2
#define NCOLS 7

int main(void) {
	double result, mean[NROWS], sum;
	double wavedata[NROWS][NCOLS] = {{93.4,  100.1, 99.8, 87.0,  88.5, 101.1, 97.6},
	                                 {100.2, 101.1, 97.5, 102.4, 98.9, 100.0, 101.5}};
	int i, j;
	for (i = 0; i < NROWS; i++) {
		printf("Data set #%d :", i + 1);
		for (j = 0; j < NCOLS; j++) {
			printf("%6.1lf ", wavedata[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < NROWS; i++) {
		sum = 0;
		printf("Mean #%d :", i + 1);
		for (j = 0; j < NCOLS; j++) {
			sum += wavedata[i][j];
		}
		printf("%8.1lf", sum / NCOLS);
		printf("\n");
		mean[i] = sum / NCOLS;
	}
	result = fabs((mean[0] - mean[1]) / ((mean[0] + mean[1]) / 2)) * 100;
	printf("Percent Difference = %3.2lf %%", result);
	return 0;
}
