#include<iostream>
using namespace std;
int main()
{
	int a, b, c;//���߳�
	int C;//�ܳ�
	cout << "���������������߳�:" << endl;
	while (true)
	{
		cin >> a >> b >> c;
		if ((a + b) >= c && (a + c) >= b && (b + c) >= a)
		{
			C = a + b + c;
			cout << "���������ܳ�Ϊ��" << C << endl;
			if (a == b || b == c || a == c)
			{
				cout << "��������Ϊ����������" << endl;

			}
			else { cout << "�������β�Ϊ����������" << endl; }
			break;
		}
		else { cout << "�����߲��ܹ���������,���������룺" << endl; }
	}
	return 0;
}