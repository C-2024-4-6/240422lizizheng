#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "a=  " << "b=" << endl;
	cin >> a >> b;
	//�������
	for (int i = min(a, b); ; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << "a��b���������Ϊ��" << i << endl;
			break;
		}
	}
	//��С������
	for (int j = 1;; j++)
	{
		if (j % a == 0 && j % b == 0)
		{
			cout << "a��b����С������Ϊ��" << j << endl;
			break;
		}
	}

	return 0;
}