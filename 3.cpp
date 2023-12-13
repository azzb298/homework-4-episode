#include<iostream>
double mianji(double);
double zhouchang(double);
const double pai = 3.14;
int main()
{
	double r , a , b;
	std::cout << "请输入半径";
	std::cin >> r;
	if (r > 0) {
	a = mianji(r);
	b = zhouchang(r);
	std::cout << "面积是" << a << '\n' << "周长是" << b;
	}
	else {
		std::cout << "输入错误，请重新输入" << '\n';
		main();
	}
}
double mianji(double a)
{
	double s;
	s = pai * a * a;
	return s;
}
double zhouchang(double b)
{
	double c;
	c = 2 * pai * b;
	return c;
}