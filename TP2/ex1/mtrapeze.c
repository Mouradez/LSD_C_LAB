#include<stdio.h>
#include<stdlib.h>

double f(double x)
{
	return x*x;
}

double trapeze(double(*f)(double),double a,double b,int n)
{
	double h=(b-a)/n;
	double z=0.5*(f(a)+f(b));
	double x;
	for(int i=0;i<n-1;i++)
	{
		x = a+i*h;
		z = z + f(x);
	}
	double result = z*h;
	return result;
}
int main()
{
	double a=0,b=1;
	int n=100;
	double resultat = trapeze(f,a,b,n);
	printf("le resultat est : %lf",resultat);
	return 0;
}

		
