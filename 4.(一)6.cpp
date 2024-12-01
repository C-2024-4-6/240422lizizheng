#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void count(string s, int counts[])
{
	//这个确实没想到......
	for (char ch : s)
	{ 
		char ch1 = tolower(static_cast<unsigned char>(ch)); // 转换为小写字母
		if (ch1 >= 'a' && ch1 <= 'z') { // 检查是否是小写字母
			counts[ch1 - 'a']++; // 更新对应字母的计数
		}
	}
}
int main()
{
	string s;
	cout << "请输入一个字符串：" << endl;
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