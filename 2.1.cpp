#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		char CH = ch - ('a' - 'A');
		cout << CH << endl;

	}
	else
	{
		cout << static_cast<int>(ch) + 1 << endl;
	}
	return 0;
}