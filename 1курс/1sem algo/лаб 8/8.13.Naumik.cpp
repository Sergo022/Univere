#include <iostream>

using namespace std;

int main()
{
    int const N = 10;
    int A[N], idod, ivid, a, b;
    for (int i = 0; i < 10; i++)
    {
        A[i] = 10 - rand() % 21;
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (A[i] > 0)
        {
            b = A[i];
            idod = i;
            break;
        }
    }
    cout << endl;
    for (int i = 1; i < 10; i++)
    {
        if (A[i] < 0)
        {
            a = A[i];
            ivid = i;
        }
    }
    A[idod] = a;
    A[ivid] = b;
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << " ";
    }


}
