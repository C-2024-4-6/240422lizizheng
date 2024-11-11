#include<iostream>
using namespace std;
#define PI 3.14
int main()
{
	float r, h, V;
	cout << "ÇëÊäÈëÔ²×¶°ë¾¶" << endl;
	cin >> r;
	cout << "ÇëÊäÈëÔ²×¶×¶¸ß" << endl;
	cin >> h;
	V = (PI * r * r * h) / 3;
	cout << "Ô²×¶µÄÌå»ýÎª£º" << V << endl;
	return 0;

}
