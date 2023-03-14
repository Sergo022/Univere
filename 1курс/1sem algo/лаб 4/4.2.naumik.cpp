#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int P = 1, n, s;
    cout << "¬вед≥ть число";
    cin >> n;
    for (int i = 2; i <= 10; i++)
    {
        P *= (i * n - 1);
    }
    cout << P << endl;
}