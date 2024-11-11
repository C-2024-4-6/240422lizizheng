#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char ch;




	cout << "请输入参数：" << endl;
	cin >> a >> b;
	cout << "请输入运算符" << endl;
	cin >> ch;
	switch (ch)
	{
	case '+': {
		cout << (a + b) << endl;
		break;
	}
	case  '-': {
		cout << (a - b) << endl;
		break;
	}
	case '*':
	{
		cout << (a * b) << endl;
		break;
	}
	case '/':
	{
		if (b == 0)
		{
			cout << "您输入的除数为零,请重新输入" << endl;
			break;
		}
		else {
			cout << (a / b) << endl;
			break;
		}

	}
	case '%':
	{
		if (b == 0)
		{
			cout << "您输入错误,请重新输入" << endl;
			break;
		}
		else {
			cout << (a % b) << endl;
			break;
		}
	}
	default: {
		cout << "您输入的运算符非法，请重新输入" << endl;
		break;
	}


	}
	return 0;
}
