#include<iostream>
void panduan(int n)
{
	if (n % 3 == 0 && n % 5 == 0 && n % 7 == 0)
	{
		std::cout << "�ܱ�3��5��7����";
	}
	else
	{
		std::cout << "���ܱ�3��5��7����";
	}
}
int main()
{
	int a;
	std::cin >> a;
	panduan(a);
	return 0;
}

