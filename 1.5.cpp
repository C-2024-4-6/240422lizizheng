#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	float F;//�����¶�
	float C;//�����¶�

	cout << "�����뻪���¶ȣ� �H" << endl;
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << fixed << setprecision(2) << endl;
	cout << "�����¶�ת�����¶�Ϊ��" << C << "��" << endl;
	return 0;
}