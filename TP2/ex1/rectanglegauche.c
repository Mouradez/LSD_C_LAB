#include<stdio.h>
#include<stdlib.h>

double f(double x)
{
	return 1/x;
}

double rectanglegauche(double(*f)(double),double a,double b,int n)
{
	double h=(b-a)/n;
	double somme=0;
	double x;
	for(int i=0;i<n;i++)
	{
		x = a+i*h;
		somme =somme + f(x);
	}
	double result = somme*h;
	return result;
}

int main()
{
	double surf=0;
	double a=1;
	double b=2;
	int n=100;
	surf = rectanglegauche(f,a,b,n);
	printf("l'intégral est ègale à %lf",surf);
	return 0;
}

		
