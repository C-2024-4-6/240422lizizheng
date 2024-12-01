#include<iostream>
using namespace std;
int main()
{
	bool ret = true;
	int a[10] = { 1,2,3,4,5,6,7,2,5,9 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < i; j++)
		{
			ret = true;
			if (a[j] == a[i])
			{
				ret = false;
				break;
				
			}
			
		}
		if (ret == true)
		{
			cout << a[i] << "  ";
		}
	}
	
	return 0;

}
