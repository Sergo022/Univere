#include <iostream>
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
}

