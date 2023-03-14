#include <iostream>

using namespace std;

int main()
{
    const int N = 5;
    int Arr[4 * N], tmp[N];

    for (int i = 0; i < 4 * N; i++)
    {
        Arr[i] = i + 1;
        cout << Arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < N; i++)
    {
        tmp[i] = Arr[4 * N - i - 1];
    }

    for (int i = 0; i < N; i++)
    {
        Arr[4 * N - i - 1] = Arr[i];
        Arr[i] = tmp[i];
    }

    for (int i = 0; i < N; i++)
    {
        tmp[i] = Arr[2 * N + i];
        Arr[2 * N + i] = Arr[i];
        Arr[i] = tmp[i];
    }
    cout << endl;

    for (int i = 0; i < 4 * N; i++)
    {
        cout << Arr[i] << " "<<endl;
    }
}
