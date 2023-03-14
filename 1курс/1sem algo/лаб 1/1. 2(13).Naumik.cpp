#include <iostream>
using namespace  std;
int main()
{
    setlocale(LC_CTYPE, "ukr");
    int x, A, B, C, D;
    cout << " ¬ведiть чотирох значне число : ";
    cin >> x;
    D = x / 1000;
    A = (x / 100) % 10;
    B = (x / 10) % 10;
    C = x % 10;

    cout << C << A << B << D << endl;





}