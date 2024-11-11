#include<iostream>
using namespace std;
int main()
{
	float a;
	cout << "请输入a的值：" << endl;
	cin >> a;
	float b = a;
	float c;
	c = (b + b / a) / 2;
	for (; c - b>0.00005 || c - b<-0.00005;)
	{
		b = c;
		c = (b + a/b) / 2;
	}
	cout << "a的平方根为：" << c << endl;
	return 0;

}