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
	cout << "请选择你将要输入的温度类型:" << endl;
	cout << "1.摄氏温度" << endl;
	cout << "2.华氏温度" << endl;
	cin >> select;
	cout << "请输入温度数值：" << endl;
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