#include <iostream>
#include<string>
#include"student.h"     //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num:" << num << endl;
    cout << "name:" << name<< endl;
    cout <<"sex:" << sex << endl;
}
void Student::set_value(int Num,const char Name[20], char Sex)
{
    num = Num;
    for (int i = 0; i < 20; i++)
    {
        name[i] = Name[i];
   }
    sex = Sex;
}
