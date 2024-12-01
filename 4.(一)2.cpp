#include<iostream>
using namespace std;
void swap(double& a, double& b)
{
	double temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	double a[10] = { 2,4,8,5,7,9,1,3,6,10 };
	//…˝–Ú≈≈¡–
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << "  ";
	}
	
}