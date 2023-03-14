#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    int tmp, j, i;
    for (i = 1; i < N; i++)
    {
        tmp = arr[i];

        for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = tmp;
    }

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
}