#include <iostream>

using namespace std;

/*
int add(int a, int b)
{

	return a+b;
}
double add(double a, double b)
{

	return a+b;
}
*/

template <typename T>
T add(T a, T b)
{

	return a+b;
}



int main(void)
{
	double x = 0;
	double y = 0;

	int i = 4;
	int j = 56;

	double a = 1.5;
	double b = 4.8;

	x = add(i,j);
	y = add(a,b);

	cout << x << " "<< y << endl;
	return 0;
}