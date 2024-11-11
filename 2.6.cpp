#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "a=  " << "b=" << endl;
	cin >> a >> b;
	//最大公因数
	for (int i = min(a, b); ; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << "a和b的最大公因数为：" << i << endl;
			break;
		}
	}
	//最小公倍数
	for (int j = 1;; j++)
	{
		if (j % a == 0 && j % b == 0)
		{
			cout << "a与b的最小公倍数为：" << j << endl;
			break;
		}
	}

	return 0;
}