#include<iostream>
long jiecheng(int);
int main()
{
	int a;
	long ans;
	std::cout << "请输入一个正整数";
	std::cin >> a;
	ans = jiecheng(a);
	std::cout <<a<<"的阶乘是" << ans;
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
