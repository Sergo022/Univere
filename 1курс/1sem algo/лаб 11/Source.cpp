#include <iostream>
using namespace std;

int main()
{
    int const N = 10;
    int arr[N];
    int min, tmp;
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < N - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

}