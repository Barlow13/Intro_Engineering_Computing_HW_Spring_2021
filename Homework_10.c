/*  Name:		Brady Barlow	*/
/*  Date:		04/13/21		*/
/*  Today:		Tuesday			*/
/*  Assignment:	Homework_10		*/

#include <stdio.h>
#include <math.h>

#define FILENAME "hw10.txt"

int main(void) {
	int m, n, choice, row, columns, i, j;
	char ans;
	FILE *hw10;
	hw10 = fopen(FILENAME, "w");
	printf("Program to process mxn matrix M\n");
	printf("=========================================\n");
	printf("Please enter the row width m (1-5)    : ");
	scanf("%d", &m);
	printf("Please enter the column width n (1-5) : ");
	scanf("%d", &n);
	printf("\nMatrix size of M is %dx%d\n", m, n);
	printf("\nEnter the M values :\n");
	double M[m][n], Value, Mt[m][n], max, Max[n];
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			printf("M[%d][%d]  = ", i, j);
			scanf("%lf", &Value);
			M[i][j] = Value;
		}
	}
	do {
		printf("\nPlease choose an operation.\n");
		printf("1. Just display the matrix\n");
		printf("2. Display the matrix and its transpose\n");
		printf("3. Find max value of each column and write to file\n");
		printf("4. Exit\n");
		do {
			printf("Your choice (1 - 4) : ");
			scanf("%d", &choice);
			if (choice < 1 || choice > 4) {
				choice = 5;
			}
		} while (choice < 1 || choice > 4);
		switch (choice) {
			case 1:
				printf("\nM is :\n");
				for (row = 0; row < m; row++) {
					for (columns = 0; columns < n; columns++) {
						printf("%8.2lf", M[row][columns]);
					}
					printf("\n");
				}
				printf("\nMore operation (Y/N)?");
				scanf(" %c", &ans);
				break;
			case 2:
				printf("\nM is :\n");
				for (row = 0; row < m; row++) {
					for (columns = 0; columns < n; columns++) {
						printf("%8.2lf", M[row][columns]);
					}
					printf("\n");
				}
				printf("M - transpose is :\n");
				for (i = 0; i < m; i++) {
					for (j = 0; j < n; j++) {
						Mt[j][i] = M[i][j];
					}
				}
				for (row = 0; row < j; row++) {
					for (columns = 0; columns < i; columns++) {
						printf("%8.2lf", Mt[row][columns]);
					}
					printf("\n");
				}
				printf("\nMore operation (Y/N)?");
				scanf(" %c", &ans);
				break;
			case 3:
				for (i = 0; i < n; i++) {
					max = 0;
					for (j = 0; j < m; j++) {
						if (M[j][i] > max) {
							max = M[j][i];
							Max[i] = M[j][i];
						}
					}
				}
				printf("\nM is :\n");
				fprintf(hw10, "M is :\n");
				for (row = 0; row < m; row++) {
					printf("         ");
					fprintf(hw10, "         ");
					for (columns = 0; columns < n; columns++) {
						printf("%8.2lf", M[row][columns]);
						fprintf(hw10, "%8.2lf", M[row][columns]);
					}
					printf("\n");
					fprintf(hw10, "\n");
				}
				printf("\nMax value");
				fprintf(hw10, "\nMax value");
				
				for (columns = 0; columns < n; columns++) {
					printf("%8.2lf", Max[columns]);
					fprintf(hw10, "%8.2lf", Max[columns]);
				}
				printf("\nMore operation (Y/N)?");
				scanf(" %c", &ans);
				break;
			case 4:
				ans = 'N';
				printf("\n BYE!");
				break;
		}
	} while ((ans == 'Y' || ans == 'y') && (ans != 'N' || ans != 'n'));
	fclose(hw10);
	return 0;
}