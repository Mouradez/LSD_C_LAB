#include<stdio.h>
#include<stdlib.h>

double f(double x)
{
	return x*x;
}

double simpson(double(*f)(double),double a,double b,int n)
{
	double h=(b-a)/n;
	double x = a+h;
	double z = (a+h)/2;
	double I1 = 0;
	double I2 = f(z);
	for(int i=0;i<n-1;i++)
	{
		z=z+h;
		I1 = I1 + f(x);
		I2 = I2 + f(z);
		x = x + h;
	}
	double integ = (h/6)*(f(a)+f(b)+2*I1+4*I2);
	return integ;
}

int main()
{
	double a=0,b=2;
	int n=100;
	double result = simpson(f,a,b,n);
	printf("l'integrale est egale a = %lf",result);
	return 0;
}


