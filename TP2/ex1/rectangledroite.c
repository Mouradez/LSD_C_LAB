#include<stdio.h>
#include<stdlib.h>

double f(double x)
{
	return 1/x;
}

double rectangledroite(double (*f)(double),double a,double b,int n)
{
	double h = (b-a)/n;
	double somme=0;
	double x=0;
	for(int i=1;i<n+1;i++)
	{
		x = a+i*h;
		somme = somme + f(x);
	}
	double resultat = somme*h;
	return resultat;
}

int main()
{
	double a=1,b=2,n=100;
	double surf=0;
	surf = rectangledroite(f,a,b,n);
	printf("l'integrale est egale à %lf",surf);
	return 0;
}

	
