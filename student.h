#pragma once
#include<iostream>
#include<string>
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int num,const char name[20], char sex);
private:
	int num;
	char name[20];
	char sex;
};
