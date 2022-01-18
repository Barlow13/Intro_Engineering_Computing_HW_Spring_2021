/*	Program:	Homework_2
	Name:		Brady Barlow
	Date:		2/8/2021		*/

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

    double Vt, Ve, Ac, Pd, h = 2.2e5, Circumference;
    /* PROCESS */

    Vt = sqrt((G*M)/(r+h));
    Ve = ((4*PI*pow(r,3))/3);
    Ac = pow(Vt,2)/(r+h);
    Pd = (g-Ac)/((g+Ac)/2)*100;
    Circumference = 2*PI*(r+h);

    /* OUTPUT */

    printf("\nSatelite distacne : %3.0lf",h/1000);
    printf(" km\n\n");
    printf("The Circumference of the orbit is %5.3lf",Circumference/1000);
    printf(" km\n");
    printf("The tangential speed is %4.3lf", Vt);
    printf(" meters per second\n");
    printf("The volume of the Earth is %1.3e",Ve);
    printf(" cubic meters\n");
    printf("The centripetal acceleration is %1.2lf",Ac);
    printf(" meters per second squared\n");
    printf("The acceleration percent difference is %1.2lf",Pd);
    printf(" percent\n ");
    printf("\nPROPERTIES\t\tVALUE\n");
    printf("----------------------------------------\n");
    printf("Orbit Circumference\t%5.3lf",Circumference/1000);
    printf(" km\n");
    printf("Tangential speed\t%4.3lf", Vt);
    printf(" m/s\n");
    printf("Earth volume\t\t%1.3e",Ve);
    printf(" m^3\n");
    printf("centripetal acc\t\t%1.2lf",Ac);
    printf(" m/s^2\n");
    printf("percent diff\t\t%1.2lf",Pd);
    printf(" %%\n ");

    return 0;
}
