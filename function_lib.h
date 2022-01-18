/*** STAT FUNCTIONS FOR 1D Data ***/

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

/*  Standard deviation function with npts is the size of the array */

double std_dev(double x[],int npts)
{
	int k;
	double sum=0,mu;
	double mean(double x[],int npts);
	
	mu = mean(x,npts);
	for(k=0;k<=npts-1;k++)
		sum += (x[k]-mu)*(x[k]-mu);
	
	return sqrt(sum/(npts-1));
}

/****STAT FUNCTIONS FOR 2D data ****/

/*  Column mean function    */

double col_mean(double x[NROWS][NCOLS], int col)
{
	int k;
	double sum=0;
	
	for(k=0;k<=NROWS-1;k++)
		sum+=x[k][col];
	
	return sum/NROWS;
}

/* end */


/*  Column standard deviation function		*/

double col_std_dev(double x[NROWS][NCOLS], int col)
{
	int k;
	double sumvar=0;
	double col_mean(double x[NROWS][NCOLS], int col);
	
	for(k=0;k<=NROWS-1;k++)
		sumvar+=((col_mean(x, col)-x[k][col])*(col_mean(x,col)-x[k][col]));
	
	return sqrt(sumvar/(NROWS-1));
}

/*** FUNCTIONS FOR ERRORS AND DIFFERENCES ***/

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


/*** FUNCTIONS FOR MATRICES ***/

int dot_product(int a[],int b[],int n)
{
	int k;
	int sum=0;
	
	for (k=0;k<n;k++)
		sum+= a[k]*b[k];
	
	return sum;
}

int det3by3(int a[NROWS][NCOLS])
{
	int k;
	int sum;
	
	sum=(a[0][0]*a[1][1]*a[2][2])+(a[0][1]*a[1][2]*a[2][0])+(a[0][2]*a[1][0]*a[2][1])-(a[2][0]*a[1][1]*a[0][2])-(a[2][1]*a[1][2]*a[0][0])-(a[2][2]*a[1][0]*a[0][1]);
	
	return sum;
}

void transpose(int b[NROWS][NCOLS],int bt[NROWS][NCOLS])
{
	int i,j;
	
	for (i=0;i<NROWS;i++)
		for (j=0;j<NCOLS;j++)
			bt[j][i]=b[i][j];
	
	return;
}

void add(int a[NROWS][NCOLS],int b[NROWS][NCOLS],int c[NROWS][NCOLS])
{
	int i,j;
	
	for (i=0;i<NROWS;i++)
		for (j=0;j<NCOLS;j++)
			c[i][j]=a[i][j]+b[i][j];
	
	return;
}
void sub(int a[NROWS][NCOLS],int b[NROWS][NCOLS],int c[NROWS][NCOLS])
{
	int i,j;
	
	for (i=0;i<NROWS;i++)
		for (j=0;j<NCOLS;j++)
			c[i][j]=a[i][j]-b[i][j];
	
	return;
}
void printmat(int a[NROWS][NCOLS])
{
	int i,j;
	
	for(i=0;i<NROWS;i++)
	{
		for (j=0;j<NCOLS;j++)
			printf("%4d ",a[i][j]);
		printf("\n");
	}
	printf("\n");
	return;
}

void matrix_mult(int a[NROWS][NCOLS],int b[NROWS][NCOLS],int c[NROWS][NCOLS])
{
	int i,j,k;
	
	for (i=0;i<NROWS;i++)
		for (j=0;j<NCOLS;j++)
		{
			c[i][j] = 0;
			for (k=0;k<NROWS;k++)
				c[i][j] += a[i][k]*b[k][j];
		}
}