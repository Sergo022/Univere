#include <iostream>
using namespace std;

int main()
{
    float n;
    cin >> n;

    while (n > 1.0 / 5.0)
    {
        n = n / 5.0;

        if (n == 1.0)
        {
            cout << "Yeas" << endl;
            break;
        }
        if (n < 1)
        {

            cout << "No" << endl;
            break;
        }

    }
}
 