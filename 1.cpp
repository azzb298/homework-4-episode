#include<iostream>
double f(double);
int main()
{
	double a, b;
	//std::cin >> a;
	a = 5;
	b = double(a);
	std::cout << b;
}
double f(double x)
{
	double y;
	if (x < 1) {
		y = x;
	}
	else if (1 <= x && x < 10) {
		y = 2 * x - 1;
	}
	else{
		y = 3 * x - 11;
	}
	return y;
}