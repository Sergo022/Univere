#include <iostream>
using namespace  std;
int main()
{
    setlocale(LC_CTYPE, "ukr");
    int a, N_1, N_2, N_3, N_4, N_5;
    cout << " ����i�� ���������� ����� : ";
    cin >> a;
    N_1 = a / 1000;
    N_2 = (a / 100) % 10;
    N_3 = (a / 10) % 10;
    N_4 = (a % 10);

    if (a > 999 && a <= 9999) {
        if (N_1 == N_2 || N_1 == N_3 || N_1 == N_4 || N_2 == N_3 || N_2 == N_4 || N_3 == N_4)
        {
            cout << "���� ����� �i�����  2 ������� �����" << endl;
        }
        else
        {
            cout << "���� �����  �� �i�����  2 ������� �����" << endl;
        }
    }
    else
    {
        cout << "�� ����� �� ���������� �����" << endl;
    }
}