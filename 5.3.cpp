#include<iostream>
using namespace std;
class cuboid
{
public:
	int C, K, G;
	int calculatecuboid()
	{
		return C * K * G;
	}
	void showcuboid()
	{
		cout << "�ó���������Ϊ��" << calculatecuboid()<< endl;
	}
};
int main()
{
	cuboid c1, c2, c3;
	cout << "��ֱ������һ��������ĳ����" << endl;
	cin >> c1.C;
	cin >> c1.K;
	cin >> c1.G;
	cout << "��ֱ�����ڶ���������ĳ����" << endl;
	cin >> c2.C;
	cin >> c2.K;
	cin >> c2.G;
	cout << "��ֱ����������������ĳ����" << endl;
	cin >> c3.C;
	cin >> c3.K;
	cin >> c3.G;
	c2.calculatecuboid();
	c3.calculatecuboid();
	c1.calculatecuboid();
	cout << "��һ�������壺" << endl;
	c1.showcuboid();
	cout << "�ڶ��������壺" << endl;
	c2.showcuboid();
	cout << "�����������壺" << endl;
	c3.showcuboid();
	return 0;
}