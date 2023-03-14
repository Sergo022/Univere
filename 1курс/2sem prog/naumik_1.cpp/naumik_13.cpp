#include <iostream>
#include<cmath>

using namespace std;

class Polinom {
public:
    int a, b, c, d;
    int x;
    Polinom() : a(1), b(1), c(1), d(1), x(2) {};

    Polinom(int na, int nb, int nc, int nd) :a(na), b(nb), c(nc), d(nd), x(2) {};

    Polinom(int na, int nb, int nc, int nd, int h) {
        a = na;
        b = nb;
        c = nc;
        d = nd;
        x = h;
    };

    void PrintPolinom() {// ax^3+bx^2+cx+d;

        cout << a << "x^3 ";

        if (b >= 0) {
            cout << " + ";
        }
        cout << b << "x^2";

        if (c >= 0) {
            cout << " + ";
        }
        cout << c << "x";
        if (d >= 0) {
            cout << " + ";

        }
        cout << d;

        cout << endl;
    };

    void PolinomV() {
        cout << "Êîåô³ö³åíòè: " << endl;
        cin >> a >> b >> c >> d;
    };
    void SetX(int a) {
        x = a;
        x = b;
        x = c;
        x = d;
    };
    int Get() {
        return x;
    }

    void Calculate() {
        int sum = 0;
        sum = a * pow(x, 3) + b * pow(x, 2) + c * x + d;
        cout << "ßêùî x = " << x << ", äîð³âíþº: " << sum << endl;

    }

};
int main()
{
    Polinom A, B(1, 2, 5, 8, 6);
    cout << "Polinom A" << endl;
    A.PrintPolinom();
    A.Calculate();
    A.PolinomV();
    A.PrintPolinom();
    A.Calculate();
    cout << "Polinom B" << endl;
    B.PrintPolinom();
    B.Calculate();
    return 0;
}