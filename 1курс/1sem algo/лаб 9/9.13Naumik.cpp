#include <iostream>
using namespace std;
int main()
{
    int const N = 5;
    int B[N];
    int M[N][N] =
    {
        {1,2,3,4,9},
        {5,4,3,7,1},
        {6,7,4,9,1},
        {9,3,7,6,5},
        {1,2,3,9,8}
    };

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + j == 4)
            {
                B[i] = M[i][j];
                cout << B[i] << " ";

            }

        }
    }
    cout << endl;
    int l = 0, r = N - 1;
    int x;
    int m;
    int max, maxi;
    cin >> x;
    for (int i = 0; i < N; i++)
    {
        if (B[i] == x)
        {
            cout << i << endl;
        }

    }
    while (l <= r)
    {
        m = (l + r) / 2;
        if (B[m] == x)
        {
            cout << "Dane chuslo prusytne na diahonali" << endl;
            // cout<<B[m];
            break;
        }
        else
        {
            if (B[m] < x)
            {

                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }

    }
    if (l > r)
    {
        cout << "Dane chuslo vidsytne na diahonali";
    }
}