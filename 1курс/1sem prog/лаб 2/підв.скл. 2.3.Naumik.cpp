#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    float H, M, K;
    cout << "����i�� ���: ";
    cin >> H >> M;
    K = H * 60 + M;
    if (((K >= 420) && (K < 780)) || ((K >= 900) && (K < 1140)))
    {
        cout << "����� �i��i���� ��������" << endl;
    }
    else
    {
        if (((K >= 460) && (K < 820)) || ((K >= 940) && (K < 1180)))
        {
            cout << "����� �i��i���� ���������" << endl;
        }
        else
        {
            if (K >= 435)
            {
                if (K < 1335)
                {
                    cout << "����� �i��i���� �����������" << endl;
                }
            }
            else
            {
                if (K >= 1380)
                {
                    if (K < 1440)
                    {
                        cout << "����� ���������� �����" << endl;
                    }
                }
            }
        }

    }


}
