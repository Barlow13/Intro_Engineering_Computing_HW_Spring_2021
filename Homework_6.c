/*  Name:		Brady Barlow	*/
/*  Date:		03/09/21		*/
/*  Today:		Tuesday			*/
/*  Assignment:	Homework_6		*/

#include <stdio.h>
#include <math.h>

int main (void)
{
    /* Declare variables */

    double a, b, c, xInt, xFin, step, y, i;
    char ans;

    printf("\n********************************************\n");
    printf("*   Program to display table x and y on    *\n");
    printf("* a quadratic equation y = ax^2 + bx + c   *\n");
    printf("********************************************\n");
    printf("Please enter a, b, and c separated by space : ");
    scanf("%lf %lf %lf",&a,&b,&c);

    /* Output */

    do {
        printf("\nPLease enter the iteration info\n");
        printf("x initial    : ");
        scanf("%lf",&xInt);
        printf("x final      : ");
        scanf("%lf",&xFin);

        while (xInt >= xFin){
            printf("x final has to be bigger than x initial\n");
            printf("Please re-enter x final : ");
            scanf("%lf",&xFin);
        }

        printf("step(min 0.1): ");
        scanf("%lf",&step);

        while (0.1 > step){
            printf("step can't be less than 0.1\n");
            printf("Please re-enter step(min 0.1): ");
            scanf("%lf",&step);
        }

        printf("\n  x        y\n");
        for (i = xInt; i <= xFin ; i = i + step){

            y = (a * pow(i, 2)) + (b * i) + c;

            printf("%2.2lf %10.2lf\n", i, y);
        }

        printf("Do you want another range (Y or N) ? ");
        scanf(" %c",&ans);

    } while (ans == 'Y');

    return 0;

}
