/*  Name:		Brady Barlow */
/*  Date:		02/11/21     */
/*  Today:		Thursday     */
/*  Assignmet:	Lab2b		 */


#include <stdio.h>
#include <math.h>

#define g 9.80665

int main (void)
{ 
   /* Declare variables */ 
   
   double Dis, L, H, W, M, FN, FLB, V, Den;

   /* Input */
   
   L = 222;
   W = 888;
   H = 1998;
   M = 4.83 * pow(10,8) ;
   
   /* Process */

   Dis =  L / 1609.3;
   FN  = g * M;
   FLB = (1/4.4482216) * FN;
   V   = L * W * H;
   Den = M/V ;  
  
   /* Output */
printf("m %lf\n",M);
printf("\nDimensions of object found in Saturn Orbit:  %5.1f x %5.1f x %5.1f \n\n",L , W, H );
printf("\nRatio of dimensions: %2f x %2f x %2f \n\n", L/222, W/222, H/222);
printf("Mass in kg: %e\n", M);
printf("Weight in Earth gravity (Newtons): %8e\n", FN);
printf("Weight in Earth gravity (Pounds): %8e\n", FLB);
printf("Volume in m^3: %e\n", V);
printf("Density in kg/m^3: %e\n", Den);

return 0;
} 