#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "ukr");

    bool A = 0 , B = 0, C = 0, R;
    R = (!(A && B)) && (!(B && C)) && (!(A && C));
    cout << boolalpha << A << " " << B << " " << C << " - " << R << endl;

    A = 0; B = 0; C = 1;
    R = (!(A && B)) && (!(B && C)) && (!(A && C));
    cout << boolalpha << A << " " << B << " " << C << " - " << R << endl;

    A = 0; B = 1; C = 0;
    R = (!(A && B)) && (!(B && C)) && (!(A && C));
    cout << boolalpha << A << " " << B << " " << C << " - " << R << endl;

    A = 0; B = 1; C = 1;
    R = (!(A && B)) && (!(B && C)) && (!(A && C));
    cout << boolalpha << A << " " << B << " " << C << " - " << R << endl;

    A = 1; B = 0; C = 0;
    R = (!(A && B)) && (!(B && C)) && (!(A && C));
    cout << boolalpha << A << " " << B << " " << C << " - " << R << endl;

    A = 1, B = 0; C = 1;
    R = (!(A && B)) && (!(B && C)) && (!(A && C));
    cout << boolalpha << A << " " << B << " " << C << " - " << R << endl;

    A = 1; B = 1; C = 0;
    R = (!(A && B)) && (!(B && C)) && (!(A && C));
    cout << boolalpha << A << " " << B << " " << C << " - " << R << endl;

    A = 1; B = 1; C = 1;
    R = (!(A && B)) && (!(B && C)) && (!(A && C));
    cout << boolalpha << A << " " << B << " " << C << " - " << R << endl;
}