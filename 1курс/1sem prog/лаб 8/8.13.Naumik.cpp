#include <iostream>

using namespace std;

int main()
{
    int const rows = 6;
    int const cols = 10;
    int n, k;
    int M[rows][cols];
    cin >> n;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            M[i][j] = rand() % 2;
            cout << M[i][j] << " ";
        }
        cout << endl;
    }



    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == n && M[i][j] == 0)
            {
                cout << "Yeas";
                break;
            }
        }

    }


}