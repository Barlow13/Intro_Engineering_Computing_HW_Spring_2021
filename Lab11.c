/*  Name:		Brady Barlow	*/
/*  Date:		04/08/21		*/
/*  Today:		Thursday		*/
/*  Assignment:	Lab10b		    */

#include <stdio.h>
#include <math.h>


#define FILENAME "prog01.txt"
#define NROWS 10
#define NCOLS 2

int main(void) {
	/* Declare Variables */
	double perdiff(double A, double B);
	double col_mean(double x[NROWS][NCOLS], int npts, int col);
	
	int data, i, j, Choice, row, columns;
	double Value, A[NROWS][NCOLS];
	char ans;
	FILE *prog01;
	prog01 = fopen(FILENAME, "w");
	printf("Enter the number of data : ");
	scanf("%d", &data);
	for (i = 0; i < NCOLS; ++i) {
		printf("\nInput data Experiement-%d\n", i + 1);
		for (j = 0; j < data; ++j) {
			printf("Data #%d : ", j + 1);
			scanf("%lf", &Value);
			A[j][i] = Value;
		}
	}
// the first set of data
	printf("\nThe average of experiment - 1 : %.2lf \n", col_mean(A, data, 0));
// the second set of data
	printf("The average of experiment - 2 : %.2lf \n", col_mean(A, data, 1));
	printf("The percent difference        : %.2lf%% \n", perdiff(col_mean(A, data, 0), col_mean(A, data, 1)));
	
	
	do {
		printf("1. Print data to monitor\n");
		printf("2. Save data to file\n");
		printf("Your choice (1 or 2) : ");
		scanf("%d", &Choice);
		switch (Choice) {
			case 1:
				printf("\nNumber of iterations: %d \n", data);
				printf("Data # |  Experiment 1  |  Experiment 2\n");
				printf("----------------------------------------\n");
				for (row = 0; row < data; row++) {
					printf("%d", row + 1);
					for (columns = 0; columns < NCOLS; columns++) {
						printf("\t|\t%.2lf", A[row][columns]);
					}
					printf("\n");
				}
				printf("\nMore operation (Y/N)?");
				scanf(" %c", &ans);
				break;
			case 2:
				fprintf(prog01, "%d\n", data);
				for (row = 0; row < data; row++) {
					fprintf(prog01, "%d", row + 1);
					for (columns = 0; columns < NCOLS; columns++) {
						fprintf(prog01, "%8.2lf", A[row][columns]);
					}
					fprintf(prog01, "\n");
				}
				printf("File is successfully created!");
				printf("\nMore operation (Y/N)?");
				scanf(" %c", &ans);
				break;
			
		}
	} while ((ans == 'Y' || ans == 'y') && (ans != 'N' || ans != 'n'));
	fclose(prog01);
	return 0;
}

double perdiff(double A, double B) {
	return fabs(A - B) / ((A + B) / 2) * 100;
}

double col_mean(double x[NROWS][NCOLS], int npts, int col) {
	int k;
	double sum = 0;
	
	for (k = 0; k <= npts - 1; k++)
		sum += x[k][col];
	
	return sum / npts;
}

