/*  Name:		Brady Barlow	*/
/*  Date:		03/02/21		*/
/*  Today:		Tuesday			*/
/*  Assignment:	Homework_5		*/

#include <stdio.h>
#include <math.h>

int main (void)
    {
        /* Declare variables */

        double D, x, x1, x2, xReal, xImg;
        int a, b, c, Output;

        /* Input */

        printf("\n------------------------------------------------\n");
        printf("  Program to calculate coefficients x1 and x2\n");
        printf("  of quadratic polynomial ax^2+bx+c\n");
        printf("------------------------------------------------\n\n");
        printf("Enter a : ");
        scanf("%d", &a);
        printf("Enter b : ");
        scanf("%d", &b);
        printf("Enter c : ");
        scanf("%d", &c);

        /* Process */

        if (a == 0){
            if (b == 0){
               Output = 1;
            }
            else {
                Output = 2;
            }
        }
        else {
            D = (pow(b,2) - 4 * a * c);
            if (D == 0) {
                Output = 3;
            }
            else {
                if (D > 0) {
                    Output = 4;
                }
                else {
                    if (b != 0){
                        Output = 5;
                    }
                    else {
                        Output = 6;
                    }
                }
            }
        }

        /* Output */

            switch (Output) {

                case 1:

                    printf("It is not an equation\n");

                    break;

                case 2:

                    x = -c / b;

                    printf("It is not quadratic\n\n");
                    printf("x = %7.3lf\n",x);

                    break;

                case 3:

                    x = (-b) / (2 * a);

                    printf("\nThe discriminant of the polynomial is %.3lf\n",D);
                    printf("x = %7.3lf\n", x);

                    break;

                case 4:

                    x1 = ((-b + sqrt(D)) / (2 * a));
                    x2 = ((-b - sqrt(D)) / (2 * a));

                    printf("\nThe discriminant of the polynomial is %.3lf\n",D);
                    printf("x1 = %7.3lf\n", x1);
                    printf("x2 = %7.3lf\n", x2);

                    break;

                case 5:

                    xReal = (-b) / (2 * a);
                    xImg = sqrt(-D) / (2 *a);

                    printf("\nThe discriminant of the polynomial is %.3lf\n",D);
                    printf("x1 = %7.3lf + %7.3lfi\n", xReal,xImg);
                    printf("x2 = %7.3lf - %7.3lfi\n", xReal,xImg);

                    break;

                case 6:

                    xReal = (-b) / (2 * a);
                    xImg = sqrt(-D) / (2 *a);

                    printf("\nThe discriminant of the polynomial is %.3lf\n",D);
                    printf("x1 = %7.3lfi\n", xImg);
                    printf("x2 = %7.3lfi\n", -xImg);

                    break;
            }

        return 0;

    }