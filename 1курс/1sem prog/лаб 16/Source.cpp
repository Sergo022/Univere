#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int card[] = { 4, 1, 4, 9, 4, 9, 9, 3, 8, 9, 3, 4, 6, 4, 5, 1 };
    int sum_1 = 0;
    int sum_2 = 0;
    int sum_3 = 0;
    int sum_4 = 0;
    int tmp;
    for (int i = 0; i < 16; i++)
    {
        if (i % 2 != 0)
        {
            sum_1 += card[i];
        }
    }
    cout << "сума цифр що сто€ть на непарних м≥сц€х - " << sum_1 << endl;

    for (int i = 0; i < 16; i++)
    {
        if (i % 2 == 0)
        {
            if (card[i] * 2 <= 9)
            {
                sum_2 += card[i] * 2;
            }
        }
    }
    cout << "сума цифр що сто€ть на парних м≥сц€х ≥ при множенн≥ на 2 <= 9 -  " << sum_2 << endl;

    for (int i = 0; i < 16; i++)
    {
        if (i % 2 == 0)
        {
            if (card[i] * 2 > 9)
            {
                tmp = card[i] * 2;
                while (tmp != 0)
                {
                    sum_3 += tmp % 10;
                    tmp = tmp / 10;
                }
            }
        }
    }
    cout << "сума цифр що сто€ть на парних м≥сц€х ≥ при множенн≥ на 2 > 9 - " << sum_3 << endl;
    sum_4 = sum_3 + sum_2 + sum_1;
    cout << "загальна сума - " << sum_4 << endl;
    if (sum_4 % 10 == 0)
    {
        cout << "номер карти правильний";
    }
    else
    {
        cout << "номер карти неправильний";
    }
}