#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 10 - rand() % 31;

        if (arr[i] < 0)
        {
            cout << "0" << arr[i] << "0" << "  ";

        }
        else {
            cout << arr[i] << "  ";
        }
    }
}
