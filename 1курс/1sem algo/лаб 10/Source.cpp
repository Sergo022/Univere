#include <iostream>

using namespace std;
int REC(int n)
{
    if (n / 10 != 0)
    {
        return  REC(n / 10) + 1;
    }

    else
    {
        return 1;
    }

}

int main()
{
    int n;
    cin >> n;
    cout << REC(n) << endl;
}