#include<iostream>
using namespace std;

void swap(double& a, double& b)
{
	double temp;
	temp = a;
	a = b;
	b = temp;
}
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
	{
		*(list3 + i) = *(list1 + i);
	}
	for (int i = size1; i < size2+size1; i++)
	{
		*(list3 + i) = *(list2 + i-size1);
	}
	//再排序
	for (int i = 0; i < size1+size2-1; i++)
	{
		for (int j = 0; j < size1+size2 - i - 1; j++)
		{
			if (list3[j] > list3[j + 1])
			{
				swap(list3[j], list3[j + 1]);
			}
		}
	}
	for (int i = 0; i < size1+size2; i++)
	{
		cout << *(list3 + i);
	}
	cout << endl;
}
int main()
{
	
	 int size1 = 80;
	 int size2 = 80;
	
	cout << "请输入两个合并好的数组：" << endl;
	cout << "请输入第一个数组的长度：" << endl;
	cin >> size1;
	int* list1 = new int[size1];
	
	
	cout << "请输入第一个数组：" << endl;
	for (int i = 0; i < size1; i++)
	{
		cin >> *(list1+i);
	}
	
	cout << "请输入第二个数组的长度：" << endl;
	cin >> size2;
	int* list2 = new int[size2];
	cout << "请输入第二个数组：" << endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> *(list2 + i);
	}
	int size3 = size1 + size2;
	int* list3 = new int[size3];
	merge( list1,  size1,   list2,  size2,  list3);
	delete[] list1;
	delete[] list2;
	delete[] list3;
	return 0;

}