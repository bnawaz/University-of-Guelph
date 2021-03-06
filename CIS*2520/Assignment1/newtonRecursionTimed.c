/*
#NAME: Mike Sadowski
#DATE: September 21st, 2014
#STUDENT ID: 0864810
#ASSIGNEMNT: Data Structures Assignment 1
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double newtonRecursion(long x, double e, double a);

int main(void)
{
	long x = 64;
	double e = 0.001;
	double a = x/2;

	a = newtonRecursion(x,e,a);
	printf("Square root of %lu with accuracy of %e is %e\n",x,e,a);
	return 1;
}

/*square roots a number x with newtons method to the accuracy of e, but using recursion instead of a loop*/
double newtonRecursion(long x, double e, double a)
{
	if(abs(a * a - x) <= e)/*check exit condition, if it's met, exit*/
	{
		return a;
	}
	else
	{
		a = (a + (x/a)) / 2;/*calculate a with newtons formula*/
		return newtonRecursion(x,e,a);/*call function again with new a value*/
	}
}
