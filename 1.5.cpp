#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	float F;//华氏温度
	float C;//摄氏温度

	cout << "请输入华氏温度： ℉" << endl;
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << fixed << setprecision(2) << endl;
	cout << "华氏温度转摄氏温度为：" << C << "℃" << endl;
	return 0;
}