#include <iostream>
#include<string>
#include"student.h"     //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
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
