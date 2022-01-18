/*  Name:		Brady Barlow */
/*  Date:		02/11/21     */
/*  Today:		Tuesday     */
/*  Assignment:	Homework_3		 */


#include <stdio.h>
#include <math.h>

int main (void)
	{ 
		/* Declare variables */ 
   
		double D, x1, x2, a, b, c;

		/* Input */
   
		printf("PROGRAM TO CALCULATE ROOT(S) of POLYNOMIAL\n");
		printf("ax^2 + bx + c\n");
		printf("Enter a :");
		scanf("%lf", &a);
		printf("Enter b :");
		scanf("%lf", &b);
		printf("Enter c :");
		scanf("%lf", &c);

		/* Process */

		D  = (pow(b,2) - 4 * a * c);
		x1 = ((-b - sqrt(D)) / (2 * a));
		x2 = ((-b + sqrt(D)) / (2 * a));
  
		/* Output */
		printf("The discriminant is %6.3lf\n", D);
		printf("The root(s) of %6.4lfx^2 + %6.4lfx + %7.4lf is :\n", a, b, c);
		printf("x1 = %4.3lf\n", x1);
		printf("x2 = %4.3lf\n", x2);


		return 0;
	} 