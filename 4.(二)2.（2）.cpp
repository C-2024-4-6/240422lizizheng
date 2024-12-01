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
	cout << "请输入一个16进制的数：" << endl;
	string c;
	cin >> c;
	
	cout << "转化后的10进制数为：" << parseHex(&c) << endl;
	

	return 0;
}