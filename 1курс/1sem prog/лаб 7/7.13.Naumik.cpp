#include <iostream>

using namespace std;

int main()
{
    int A[10], B[10];
    int i;
    for (int i = 0; i < 10; i++)
    {
        A[i] = 10 - rand() % 31;
        cout << A[i] << " ";
        B[i] = A[i];
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        if (B[i] >= 0) {
            cout << B[i] << " ";
        }
    }
    for (int i = 0; i < 10; i++)

    {
        if (B[i] < 0) {
            cout << B[i] << " ";
        }
    }
}