#include <iostream>

using namespace std;

bool Triangle(int a, int b, int c)
{   
        return (a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b) || (c * c) + (b * b) == (a * a);
}
bool Triangle(double a, double b, double c)
{
        return (a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b) || (c * c) + (b * b) == (a * a);
}
int main()
{
    cout << Triangle(4, 6, 3) << endl;
    cout << Triangle(3.56, 4.78, 5.6) << endl;
}