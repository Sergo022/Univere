#include <iostream>
using namespace std;

int main()
{
    int N;
    float A = 0.0, P = 1.0;
    float i;
    cout << "Ââåäiòü ÷èñëî : ";
    cin >> N;
    for (i = -4; i <= N; i++)
    {
        if (i == -5)
        {
            continue;
        }
        if (i == 7)
        {
            continue;
        }
        A = (i * i - 3 * i + 9) / ((i + 5) * (i - 7));
        P = P * A;
    }
    cout << "P = " << P << endl;
}                                                                                        //Ï²ÄÂÈÙÅÍÀ ÑÊËÀÄÍ²ÑÒÜ



/*#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float R = 0, S = 0;
    int n = 100, i = 1;
    float fi = i;

    while (i <= n)
    {
        if (i % 2 == 1)
        {
            R += 1 / fi;
        }
        if (i % 2 == 0)
        {

            R -= 1 / fi;
        }
        S += (1 / fi);
        i++;
        fi = i;

    }
    cout << "R = " << R << endl << "S = " << S << endl;
}*/
