#include <iostream>
#include <iomanip>

using namespace std;

float recursion_pow(float n, float k) {
    if (k == 1)
        return n;

    return n * recursion_pow(n, k - 1);

}
float recursion_fact(float k)
{
    if (k == 1)
    {
        return k;
    }
    else
    {
        return k * recursion_fact(k - 1);
    }
}
int main()
{
    float x, s = 0.0;
    cin >> x;
    for (int k = 2; k <= 10; k++)
    {
        s += recursion_pow(x, 2 * k - 1) / 2 * recursion_fact(2 * k - 1);
    }
    cout << "сума - " << s;
}
#include <iostream>
#include <iomanip>

using namespace std;

float recursion_pow(float base, float n) {
    if (n == 0)
        return 1.0;

    return base * recursion_pow(base, n - 1);

}
int main()
{
    float x, s = 0;
    cin >> x;
    for (int k = 1; k <= 10; k++)
    {
        s += recursion_pow(x, 2 * k) / 2 * k * (2 * k - 1);
    }
    cout << setprecision(20) << s;
}