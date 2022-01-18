/*  Name:		Brady Barlow	*/
/*  Date:		04/08/21		*/
/*  Today:		Thursday		*/
/*  Assignment:	Lab10b		    */

#include <stdio.h>
#include <math.h>
#include "stat_lib.h"

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
	double OneD_array[NROWS], OneD_array1[NROWS], OneD_array2[NROWS];
	int Week, Week1, Week2, Choice, i;
	
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
				for (i = 0; i < NROWS; i++)
					OneD_array[i] = Array[i][Week - 1];
				printf("--------------------------\n");
				printf("Mean            :%8.2lf\n", mean(OneD_array, NROWS));
				printf("Std. deviation  :%8.2lf\n", std_dev(OneD_array, NROWS));
				printf("Percent error   :%8.2lf%%\n\n\n", pererr(mean(OneD_array, NROWS), Power));
				break;
			
			case 2:
				printf("Please enter which weeks for calculation seperated by space : ");
				scanf("%d %d", &Week1, &Week2);
				for (i = 0; i < NROWS; i++)
					OneD_array1[i] = Array[i][Week1 - 1];
				for (i = 0; i < NROWS; i++)
					OneD_array2[i] = Array[i][Week2 - 1];
				printf("\n");
				printf("Percent different between the average of week-%d and week-%d is %3.2lf%%\n\n", Week1, Week2,
				       perdiff(mean(OneD_array1, NROWS), mean(OneD_array2, NROWS)));
				break;
			case 3:
				Choice = 3;
				break;
			
			
		}
	} while (Choice != 3);
	
	
	return 0;
}

