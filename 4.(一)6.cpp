#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void count(string s, int counts[])
{
	//���ȷʵû�뵽......
	for (char ch : s)
	{ 
		char ch1 = tolower(static_cast<unsigned char>(ch)); // ת��ΪСд��ĸ
		if (ch1 >= 'a' && ch1 <= 'z') { // ����Ƿ���Сд��ĸ
			counts[ch1 - 'a']++; // ���¶�Ӧ��ĸ�ļ���
		}
	}
}
int main()
{
	string s;
	cout << "������һ���ַ�����" << endl;
	getline(cin, s);
	int counts[26] = { 0 };
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] > 0)
		{
			cout << static_cast<char>('a' + i) << ":" << counts[i] << endl;
		}
	}
	
	return 0;
}