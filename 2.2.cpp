#include<iostream>
using namespace std;
int main()
{
	float x;
	float y;
	cout << "请输入一个数x" << endl;

	while (true)
	{
		cin >> x;
		if (x > 0 && x < 1)
		{
			y = 3 - 2 * x;
			break;
		}
		else if (x >= 1 && x < 5)
		{
			y = 2 / (4 * x) + 1;
			break;
		}
		else if (x >= 5 && x <= 10)
		{
			y = x * x;
			break;
		}
		else {
			cout << "您输入的x不在定义域内，请重新输入：" << endl;

		}

	}
	cout << "y的值为：" << y << endl;
	return 0;

}