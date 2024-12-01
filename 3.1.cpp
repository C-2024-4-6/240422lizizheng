#include<iostream>
using namespace std;
int calculate(int a, int b)
{
	for (int i = max(a, b); i > 0; i--)
	{
		if (a % i ==0&&b%i==0)
			return i;
		
	}
}
int main()
{
	cout << "请输入要求最大公约数的两数：" << endl;
	int a, b;
	cin >> a >> b;
	int c = calculate(a, b);
	cout << "最大公约数为：" << c << endl;
	return 0;
}