#include<iostream>
using namespace std;
#include<cstring>
int indexOf(const char* s1, const char* s2)
{
    const char* ptr = strstr(s2, s1);
    if (ptr != nullptr)
    {
        return ptr - s2;
    }
    else
    {
        return -1;
    }
}
int main()
{
    char s1[100];
    char s2[100];
    cout << "请输入第一个字符串：" << endl;
    cin.getline(s1, sizeof(s1));
    cout << "请输入第二个字符串：" << endl;
    cin.getline(s2, sizeof(s2));

    cout << indexOf(s1, s2) << endl;
    return 0;
}