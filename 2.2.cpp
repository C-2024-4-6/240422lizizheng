#include<iostream>
using namespace std;
int main()
{
	float x;
	float y;
	cout << "������һ����x" << endl;

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
			cout << "�������x���ڶ������ڣ����������룺" << endl;

		}

	}
	cout << "y��ֵΪ��" << y << endl;
	return 0;

}