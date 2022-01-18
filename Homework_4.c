/*  Name:		Brady Barlow	*/
/*  Date:		03/2/21		*/
/*  Today:		Tuesday			*/
/*  Assignment:	Homework_5		*/

#include <stdio.h>
#include <math.h>

int main (void)
	{
		/* Declare variables */ 
   
		double D, x1, x2;
		int a, b, c;
		

		/* Input */
		
		printf("---------------------------------------------------\n");
		printf("  Program to calculate roots x1 and x2\n");
		printf("  of quadratic polynomial ax^2+bx+c\n");
		printf("---------------------------------------------------\n\n");
		printf("Enter a : ");
		scanf("%d", &a);
		printf("Enter b : ");
		scanf("%d", &b);
		printf("Enter c : ");
		scanf("%d", &c);

		/* Output */
		
		if (a == 0){ printf("It is not quadratic");}
		else { 
			
			D  = (pow(b,2) - 4 * a * c);
			
			if (D == 0) { printf("The discriminant is %6.3lf\n", D); printf("one real root");
			}
			else if (D < 0) { printf("The discriminant is %6.3lf\n", D); printf("imaginary roots");
			}
			else {	printf("The discriminant is %6.3lf\n", D);
					x1 = ((-b + sqrt(D)) / (2 * a));
					x2 = ((-b - sqrt(D)) / (2 * a));
					printf("x1 = %4.3lf\n", x1);
					printf("x2 = %4.3lf\n", x2);
			}			
		}
		
		return 0;
	} 