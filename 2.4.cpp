#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char ch;




	cout << "�����������" << endl;
	cin >> a >> b;
	cout << "�����������" << endl;
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
			cout << "������ĳ���Ϊ��,����������" << endl;
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
			cout << "���������,����������" << endl;
			break;
		}
		else {
			cout << (a % b) << endl;
			break;
		}
	}
	default: {
		cout << "�������������Ƿ�������������" << endl;
		break;
	}


	}
	return 0;
}
