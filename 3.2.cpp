#include<iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
		
	}
	return true;
}
//��ǰ���ٸ�����
void test01()
{
	
		for (int j = 1,i=0; j <= 200; j++)
		{
			if (is_prime(j))
			{
				cout << j<<"  ";
				i++;
			}
			if (i%10==0)
			{
				cout << endl;
			}
		}
	
}
int main()
{
	cout << "������һ�����֣�" << endl;
	int a;
	cin >> a;
	bool ret = is_prime(a);
	if (ret == false)
	{
		cout << "������������" << endl;

	}
	else cout << "����Ϊ����" << endl;
	//��ǰ���ٸ�����
	test01();
	return 0;
}