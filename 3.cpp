#include<iostream>
double mianji(double);
double zhouchang(double);
const double pai = 3.14;
int main()
{
	double r , a , b;
	std::cout << "������뾶";
	std::cin >> r;
	if (r > 0) {
	a = mianji(r);
	b = zhouchang(r);
	std::cout << "�����" << a << '\n' << "�ܳ���" << b;
	}
	else {
		std::cout << "�����������������" << '\n';
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