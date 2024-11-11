#include<iostream>
using namespace std;
int main()
{
	int a, b, c;//三边长
	int C;//周长
	cout << "请输入三角形三边长:" << endl;
	while (true)
	{
		cin >> a >> b >> c;
		if ((a + b) >= c && (a + c) >= b && (b + c) >= a)
		{
			C = a + b + c;
			cout << "该三角形周长为：" << C << endl;
			if (a == b || b == c || a == c)
			{
				cout << "该三角形为等腰三角形" << endl;

			}
			else { cout << "该三角形不为等腰三角形" << endl; }
			break;
		}
		else { cout << "该三边不能构成三角形,请重新输入：" << endl; }
	}
	return 0;
}