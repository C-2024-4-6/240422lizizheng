#include<iostream>
using namespace std;
class cuboid
{
public:
	int C, K, G;
	int calculatecuboid()
	{
		return C * K * G;
	}
	void showcuboid()
	{
		cout << "该长方体的体积为：" << calculatecuboid()<< endl;
	}
};
int main()
{
	cuboid c1, c2, c3;
	cout << "请分别输入第一个长方体的长宽高" << endl;
	cin >> c1.C;
	cin >> c1.K;
	cin >> c1.G;
	cout << "请分别输入第二个长方体的长宽高" << endl;
	cin >> c2.C;
	cin >> c2.K;
	cin >> c2.G;
	cout << "请分别输入第三个长方体的长宽高" << endl;
	cin >> c3.C;
	cin >> c3.K;
	cin >> c3.G;
	c2.calculatecuboid();
	c3.calculatecuboid();
	c1.calculatecuboid();
	cout << "第一个长方体：" << endl;
	c1.showcuboid();
	cout << "第二个长方体：" << endl;
	c2.showcuboid();
	cout << "第三个长方体：" << endl;
	c3.showcuboid();
	return 0;
}