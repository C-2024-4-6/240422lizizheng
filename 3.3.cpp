#include<iostream>
using namespace std;
#include"mytemperature.h"
double celsius_to_fah(double cel)
{
	double F = 1.8 * cel + 32;
	return F;
}
double fahrenheit_to_cels(double fah)
{
	double C = 5 * (fah - 32) / 9;
	return C;
}
int main()
{
	int select = 0;
	cout << "��ѡ���㽫Ҫ������¶�����:" << endl;
	cout << "1.�����¶�" << endl;
	cout << "2.�����¶�" << endl;
	cin >> select;
	cout << "�������¶���ֵ��" << endl;
	double W = 0;
	cin >> W;
	if (select == 1)
	{
		
		cout << "Celsius    Fahrenheit" << endl;
		cout << W << "      " << celsius_to_fah(W) << endl;
	}
	if (select == 2)
	{
		cout << " Fahrenheit       Celsius" << endl;
		cout << W << "      " << fahrenheit_to_cels(W) << endl;
	}
	return 0;
}