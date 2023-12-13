#include<iostream>
void panduan(int n)
{
	if (n % 3 == 0 && n % 5 == 0 && n % 7 == 0)
	{
		std::cout << "能被3、5、7整除";
	}
	else
	{
		std::cout << "不能被3、5、7整除";
	}
}
int main()
{
	int a;
	std::cin >> a;
	panduan(a);
	return 0;
}

