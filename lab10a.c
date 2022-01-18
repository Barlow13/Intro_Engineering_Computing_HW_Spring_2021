/*  Name:		Brady Barlow	*/
/*  Date:		04/08/21		*/
/*  Today:		Thursday		*/
/*  Assignment:	Lab10a		    */

#include <stdio.h>
#include <math.h>

#define NROWS 7
#define NCOLS 4

int main(void) {
	/* Declare Variables */
	double Power, Array[NROWS][NCOLS] = {{253.14, 222.89, 250.01, 217.45},
	                                     {203.57, 211.57, 195.24, 200.14},
	                                     {249.22, 246.24, 213.10, 255.98},
	                                     {212.12, 200.45, 245.98, 214.22},
	                                     {240.91, 252.86, 221.36, 280.25},
	                                     {200.11, 199.10, 256.37, 244.14},
	                                     {241.00, 231.86, 242.22, 250.34}};
	int Week, Week1, Week2, Choice;
	double perdiff(double A, double B);
	double pererr(double A, double B);
	double col_mean(double x[NROWS][NCOLS], int col);
	double col_std_dev(double x[NROWS][NCOLS], int col);
	/* Process */
	do {
		printf("Please choose an operation :\n");
		printf("1. Show statistical data of specific week\n");
		printf("2. Show percent different between two weeks of data\n");
		printf("3. End the program\n");
		printf("Your choice : ");
		scanf("%d", &Choice);
		
		while (Choice > 3 || Choice < 1) {
			Choice = 4;
		}
		
		switch (Choice) {
			
			case 1:
				printf("Which week (1-4): ");
				scanf("%d", &Week);
				printf("Ideal power output : ");
				scanf("%lf", &Power);
				printf("\n");
				printf("Statistical data week-%d\n", Week);
				printf("--------------------------\n");
				printf("Mean            :%8.2lf\n", col_mean(Array, Week - 1));
				printf("Std. deviation  :%8.2lf\n", col_std_dev(Array, Week - 1));
				printf("Percent error   :%8.2lf%%\n\n\n", pererr(col_mean(Array, Week - 1), Power));
				break;
			
			case 2:
				printf("Please enter which weeks for calculation seperated by space : ");
				scanf("%d %d", &Week1, &Week2);
				printf("\n");
				printf("Percent different between the average of week-%d and week-%d is %3.2lf%%\n\n", Week1, Week2,
				       perdiff(col_mean(Array, Week1 - 1), col_mean(Array, Week2 - 1)));
				break;
			case 3:
				Choice = 3;
				break;
			
			
		}
	} while (Choice != 3);
	
	
	return 0;
}

/*  Percent Difference Function - (Requires the inclusion of the math.h library for fabs function)  */
double perdiff(double A, double B) {
	return fabs(A - B) / ((A + B) / 2) * 100;
}

/*  Percent Error Function - (Requires the inclusion of the math.h library for fabs function) */
double pererr(double A, double B) {
	return fabs(A - B) / A * 100;
}

/*  Column mean function    */
double col_mean(double x[NROWS][NCOLS], int col) {
	int k;
	double sum = 0;
	for (k = 0; k <= NROWS - 1; k++)
		sum += x[k][col];
	return sum / NROWS;
}

/*  Column standard deviation function		*/
double col_std_dev(double x[NROWS][NCOLS], int col) {
	int k;
	double sumvar = 0;
	double col_mean(double x[NROWS][NCOLS], int col);
	for (k = 0; k <= NROWS - 1; k++)
		sumvar += ((col_mean(x, col) - x[k][col]) * (col_mean(x, col) - x[k][col]));
	return sqrt(sumvar / (NROWS - 1));
}

