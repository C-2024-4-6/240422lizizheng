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
//找前两百个素数
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
	cout << "请输入一个数字：" << endl;
	int a;
	cin >> a;
	bool ret = is_prime(a);
	if (ret == false)
	{
		cout << "该数不是素数" << endl;

	}
	else cout << "该数为素数" << endl;
	//找前两百个素数
	test01();
	return 0;
}