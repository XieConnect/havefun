/**
 * @description Calculate integration of a function
 * @auhor Wei Xie <XieConnect (at) gmail.com>
 */

#include <stdio.h>

/*
 * f(a) = a * a
 */

double func_to_calc(double param)
{
	return param * param;
}

/*
 * Result = ( (f(a) + f(b)) / 2.0 + SUM(f(a + i*h)) ) * h
 * where i = 1 to (n-1)
 */

double integration(double (*func_p)())
{
	int a = 0, b = 1;
	long int n = 1000000;
	double h = ((double)(b - a)) / n;

	double sum = ((*func_p)(a) + (*func_p)(b) ) / 2.0;
	
	int i;
	for(i = 1; i < n; ++i)
	{
		sum += (*func_p)(a + i * h);
	}
	return sum * h;
}

void main()
{
	printf("Calculating integration. ");
	printf("Result: %lf \n", integration(func_to_calc));
}
