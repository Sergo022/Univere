#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile{ "erttyy.dat" };

    int i = 120;
    for (int j = 1; j <= 12; j++)
    {
        for (i; i >= 12; i--)
        {
            i -= 11;
            outfile << i << " ";
        }
        outfile << endl;
        i = 120 + j;
    }

    int const N = 10;
    int Arr[N][N];
    ifstream infail{ "erttyy.dat" };
    for (int j = 0; j <= N + 1; j++)
    {
        for (int i = 0; i < N; i++)
        {
            infail >> Arr[j][i];
            cout << Arr[j][i] << " ";
        }
        cout << endl;
    }



}