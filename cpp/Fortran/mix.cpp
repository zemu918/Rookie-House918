
#include <iostream>
#include <stdio.h>

#include "mixcppfor.hpp"

using namespace std; 

int plusfun(int a, int b)
{
	int c=a+b;
	return c;
}


double multiplyfun(int a, double b[])
{
	double c=1.0;
	for (int i=0;i<a;i++)
	{
		c=c*b[i];
	}
	return c;
}


