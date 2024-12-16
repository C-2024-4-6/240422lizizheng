#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j)
	{
		this->x = this->x + i;
		this->y = this->y + j;
	}
	void display()
	{
		cout << "(" << this->x << "," << this->y << ")" << endl;
	}
};
int main()
{
	Point p(60, 80);
	p.setPoint(2, 3);
	p.display();
	return 0;
}
