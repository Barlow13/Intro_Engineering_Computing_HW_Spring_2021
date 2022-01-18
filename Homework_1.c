/*	Program:	Homework_1
	Name:		Brady Barlow 
	Date:		1/26/2021		*/

#include <stdio.h>
#include <math.h>

/* Constants */

#define PI 3.141593
#define G 6.67259e-11
#define g 9.80665
#define M 5.972e24
#define r 6378000

int main()
{  

	/* Declaration of variables */

	double Vt, Ve, Ac, Pd, h = 2.2e5;
	
	/* PROCESS */
	
	Vt = sqrt((G*M)/(r+h));
	Ve = ((4*PI*pow(r,3))/3);
	Ac = pow(Vt,2)/(r+h);
	Pd = (g-Ac)/((g+Ac)/2)*100;
	
	/* OOUTPUT */
	
	printf("The tangential speed of the satellite is %lf ", Vt);
	printf("meters per second. \n");
	printf("The volume of the earth is %lf ",Ve);
	printf("cubic meters. \n");
	printf("The centripetal acceleration of the satellite is %lf ",Ac);
	printf(" meters per second squared. \n");
	printf("The percent difference is %lf ",Pd);
	printf("percent. \n ");

	return 0;
}
