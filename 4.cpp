#include<iostream>
long jiecheng(int);
int main()
{
	int a;
	long ans;
	std::cout << "������һ��������";
	std::cin >> a;
	ans = jiecheng(a);
	std::cout <<a<<"�Ľ׳���" << ans;
}
long jiecheng(int n)
{
	if (n == 1) {
		return 1;
	}
	else {
		return n * jiecheng(n - 1);
	}
}
