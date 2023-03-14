#include <iostream>
using namespace std;

int main()
{
    int N;
    float A = 0.0, S = 0.0;
    float i;
    cout << "¬ведiть число : ";
    cin >> N;
    for (i = -2; i <= N; i++)
    {
        if (i == -1)
        {
            continue;
        }
        if (i == 4)
        {
            continue;
        }
        A = (i * i + 8 * i + 3) / ((i + 1) * (i - 4));
        S = S + A;
    }
    cout << "S = " << S << endl;
}