#include<iostream>
using namespace std;
int main()
{

	float W = 0;//��Ǯ��
	float P;//ƽ��Ǯ��
	for (int a = 2; a <= 100; a * 2)
	{

		W = W + 0.8 * a;
		P = W / a;
		a = a + a * 2;

	}

	cout << P << endl;

	return 0;
}