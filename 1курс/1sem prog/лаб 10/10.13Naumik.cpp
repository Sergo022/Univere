#include <iostream>

using namespace std;

bool IsPower2(float T)
{
    while (T > 1.0 / 2.0)
    {
        T = T / 2.0;

        if (T == 1.0)
        {
            return true;
        }
        if (T < 1)
        {
            return false;
        }
    }
}
int main()
{
    float T;
    cin >> T;
    cout << IsPower2(T) << endl;
    return 0;
}
