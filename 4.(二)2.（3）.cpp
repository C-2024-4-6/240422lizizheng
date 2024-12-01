#include<iostream>
using namespace std;
//≈≈–Ú
void paixv(int*a)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5 - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}
int main()
{
	int* a = new int[5] {1, 6, 4, 5, 2};
	paixv(a);
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << "  ";
	}
	return 0;
}