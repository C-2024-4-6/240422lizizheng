#include<iostream>
using namespace std;
class student
{
public:
	int id;
	int score;
	
};
class guanli
{
public:
	student s[5];

};
void max(guanli*a)
{
	for (int i = 0; i < 4; i++)
	{
		if (a->s[i].score > a->s[i + 1].score)
		{
			
			a->s[i + 1] = a->s[i];
		}
	}
	cout<<"�ɼ�����ߵ�ѧ��Ϊ��" << a->s[4].id << endl;
}

int main()
{
	guanli a;
	
	cout << "������5��ѧ����ѧ�źͳɼ�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "��ֱ������" << i+1 << "��ѧ����id�ͳɼ�" << endl;
		cin >> a.s[i].id;
		cin >> a.s[i].score;
	}
	max(&a);
	return 0;
}