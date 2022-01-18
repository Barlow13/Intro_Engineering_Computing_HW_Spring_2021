/*  Percent Difference Function - (Requires the inclusion of the math.h library for fabs function)  */

double perdiff(double A, double B)
{
return fabs(A-B)/((A+B)/2)*100;
}

/* end */



/*  Percent Error Function - (Requires the inclusion of the math.h library for fabs function) */

double pererr(double A, double B)
{
return fabs(A-B)/A*100;
}

/* end */





/*  Mean function with npts is the size of the array */

double mean(double x[], int npts)
{
   int k;
   double sum=0;

   for(k=0;k<=npts-1;k++)
   sum+=x[k];

   return sum/npts;
}

/* end */

/*  variance function with npts is the size of the array */

double variance(double x[],int npts)
{
    int k;
    double sum=0,mu;
    double mean(double x[],int npts);

    mu = mean(x,npts);
    for(k=0;k<=npts-1;k++)   
      sum += (x[k]-mu)*(x[k]-mu);

    return sum/(npts-1);
}

/*  Standard deviation function with npts is the size of the array */


double std_dev(double x[], int npts)
{
   double variance(double x[],int npts); 
   
   return sqrt(variance(x,npts));
}



