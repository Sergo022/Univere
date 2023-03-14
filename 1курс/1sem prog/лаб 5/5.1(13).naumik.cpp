#include <iostream>

using namespace std;

int main()
{
    int i = 120;
    for (int j = 1; j <= 12; j++)
    {
        for (i; i >= 12; i--)
        {
            i -= 11;
            cout << i << " ";
        }
        cout << endl;
        i = 120 + j;
    }
}