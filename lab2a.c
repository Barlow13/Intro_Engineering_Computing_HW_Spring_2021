/*  Name:		Brady Barlow */
/*  Date:		02/11/21     */
/*  Today:		Thursday     */
/*  Assignmet:	Lab2a		 */


#include <stdio.h>
int main (void)
{ 
   /* Declare variables */ 
   
   double F, C, R, K;

   /* Input */
   
   C = 14;
   
   /* Process */

    F = 9.0 / 5 * C + 32;
	K = C + 273.15;
	R = 459.67 + F;

   /* Output */

	printf("\nTemperature in degrees C: %+7.2f\n\n", C );
	printf("Temperature converted to degrees F: %+7.2f\n", F );
	printf("Temperature converted to Kelvins: %+7.2f\n", K );
	printf("Temperature converted to degrees R: %+7.2f\n", R );


return 0;
} 