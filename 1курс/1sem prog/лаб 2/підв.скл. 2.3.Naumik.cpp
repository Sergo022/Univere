#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    float H, M, K;
    cout << "Введiть час: ";
    cin >> H >> M;
    K = H * 60 + M;
    if (((K >= 420) && (K < 780)) || ((K >= 900) && (K < 1140)))
    {
        cout << "Краще вiдвiдати крамницю" << endl;
    }
    else
    {
        if (((K >= 460) && (K < 820)) || ((K >= 940) && (K < 1180)))
        {
            cout << "Краще вiдвiдати Гастроном" << endl;
        }
        else
        {
            if (K >= 435)
            {
                if (K < 1335)
                {
                    cout << "Краще вiдвiдати супермаркет" << endl;
                }
            }
            else
            {
                if (K >= 1380)
                {
                    if (K < 1440)
                    {
                        cout << "Краще залишитись вдома" << endl;
                    }
                }
            }
        }

    }


}
