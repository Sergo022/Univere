#include <iostream>
using namespace  std;
int main()
{
    setlocale(LC_CTYPE, "ukr");
    float x, y;
    cout << " ����i�� � : ";
    cin >> x;
    cout << " ����i�� y :";
    cin >> y;
    if (-1 <= x <= 1.5)
    {
        if (-0.5 <= y <= 1.5)
        {
            cout << " ������ ����� ��������� � ������������ �������" << endl;
        }
    }
        else
        {
        cout << " ������ ����� ����������� � ������������ �������" << endl;
        }

}