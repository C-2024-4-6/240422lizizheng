#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:       
	int hour;
	int minute;
	int sec;
public:
	Time(int hour, int minute, int sec)
	{
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}
	void showtime()
	{
		cout << this->hour << ":" << this->minute << ":" << this->sec << endl;
	}
};
int main()
{
	int hour, minute, sec;
	cin >> hour;      //�����趨��ʱ�� 
	cin >> minute;
	cin >> sec;
	Time t1(hour, minute, sec);
	t1.showtime();
	return 0;
}
