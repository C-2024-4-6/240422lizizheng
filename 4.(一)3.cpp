#include<iostream>
using namespace std;
void change(bool& a)
{
	a = !a;
}
int main()
{
	bool a[100];
	for (int i = 0; i < 100; i++)
	{
		a[i] = false;
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = i + 1; j < 101; j=j+i+1)
		{
			change(a[j - 1]);
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if(a[i]==true)
		{
			cout << i+1 << "   ";
		}
	}
	return 0;
}