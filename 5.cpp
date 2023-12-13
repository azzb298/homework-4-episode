#include < iostream >
#include < cmath >
#include < iomanip > 
void sushu(int);
int main()
{
	int m;
	for (m = 101; m <= 200; m = m + 2) {
		sushu(m);
	}
}
void sushu(int a)
{
	int k,i;
	bool p;
	p = true;
	k = int(sqrt(a));
	for (i = 2; i <= k; i++) {
		if (a % i == 0) {
			p = false;
			break;
		}
	}
	if (p) {
		std::cout << std::setw(5) << a;
	}
}