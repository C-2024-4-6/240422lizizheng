#include<iostream>
#include<string>
using namespace std;
int parseHex(string* hexString)
{
	int c = stoi(*hexString, nullptr, 16);
	return c;
}
int main()

{
	cout << "������һ��16���Ƶ�����" << endl;
	string c;
	cin >> c;
	
	cout << "ת�����10������Ϊ��" << parseHex(&c) << endl;
	

	return 0;
}