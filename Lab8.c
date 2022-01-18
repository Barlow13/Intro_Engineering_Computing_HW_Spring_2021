/*  Name:		Brady Barlow	*/
/*  Date:		03/25/21		*/
/*  Today:		Thursday			*/
/*  Assignment:	Lab_8		*/

#include <stdio.h>
#include <math.h>

int main (void)
{

    /* Output */

        int i,n,choice;
        printf("PLease input how many temperature values that are present (from 2 to 10): ");
        scanf("%d",&n);
        if (n > 10 || n < 2){
            choice = 6;
        }

        double array[n];
        printf("PLease input temperture values\n");
        for (i = 0; i < n; i++){
            printf("Temperature value #%d: ",i);
            scanf("%lf",&array[i]);
        }
        double mean, values;
        for (i = 0; i < n ; i++) {

            values += array[i];

        }
        mean = values/n;
        double dev;
        printf("\nThe mean of the set is: %2.2lf\n",mean);
        for (int i = 0; i < n; ++i) {
            dev += pow((array[i]-mean),2);
        }
        printf("The standard deviation of the set is: %lf\n",dev);
        do {
            printf("Is there anything else you would like to do?\n");
            printf("The numbers related to the choices are listed below:\n");
            printf("1. Review a specific value in the set\n");
            printf("2. View the percent error\n");
            printf("3. End the program\n");
            printf("Please enter your choic (the number): ");
            scanf("%d", &choice);

            int set;
            double known;

            switch (choice) {
                case 1:
                    printf("Which term int the set do you wish to view (0 to 4)? (type an interger)");
                    scanf("%d", &set);
                    printf("\nThe number in the set is: %lf\n", array[set]);
                    break;
                case 2:
                    printf("PLease input the known value for the right temperature: ");
                    scanf("%lf", &known);
                    double error = fabs((known - mean) / mean) * 100;
                    printf("\nThe percent error is: %2.2lf%%\n", error);
                    break;
                case 3:
                    break;

            }
        }
            while (choice != 3);
            return 0;
        }

