/*  Name:		Brady Barlow	*/
/*  Date:		04/22/21		*/
/*  Today:		Thursday		*/
/*  Assignment:	Lab12		    */

#include <stdio.h>
#include <math.h>
#include "stat_lib.h"

#define FILENAME "lab12test.txt"
#define NROWS 2000

int main(void) {
	/* Declare Variables */
	int data, i, Choice, index;
	double value, A[NROWS];
	char ans;
	FILE *Lab12;
	Lab12 = fopen(FILENAME, "r");
	fscanf(Lab12, "%d", &data);
	for (i = 0; i < data; ++i) {
		fscanf(Lab12, "%lf", &A[i]);
	}
	printf("Number of data     : %d\n", data);
	printf("Mean               : %.3lf\n", mean(A, data));
	printf("Standard deviation : %.3lf\n\n", std_dev(A, data));
	do {
		printf("Choose a process\n");
		printf("1. Review a data\n");
		printf("2. Calculate percent error\n");
		printf("Your choice (1 or 2) : ");
		scanf("%d", &Choice);
		while (Choice > 2 || Choice < 1) {
			Choice = 3;
		}
		switch (Choice) {
			case 1:
				printf("You chose to review a data.\n");
				printf("Please enter data number (1 - %d) : ", data);
				scanf("%d", &index);
				printf("Data #%d : %.3lf\n", index, A[index - 1]);
				printf("More process (Y/N)?");
				scanf(" %c", &ans);
				break;
			case 2:
				printf("You chose to calculate percent error\n");
				printf("Enter the known value : ");
				scanf("%lf", &value);
				printf("Percent error : %.3lf%%\n", pererr(value, mean(A, data)));
				printf("More process (Y/N)?");
				scanf(" %c", &ans);
				break;
			case 3:
				printf("\n");
				ans = 'Y';
				break;
		}
	} while ((ans == 'Y' || ans == 'y') && (ans != 'N' || ans != 'n'));
	fclose(Lab12);
	return 0;
}



