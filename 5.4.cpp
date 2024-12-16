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
	cout<<"成绩最高者的学号为：" << a->s[4].id << endl;
}

int main()
{
	guanli a;
	
	cout << "请输入5个学生的学号和成绩" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "请分别输入第" << i+1 << "个学生的id和成绩" << endl;
		cin >> a.s[i].id;
		cin >> a.s[i].score;
	}
	max(&a);
	return 0;
}