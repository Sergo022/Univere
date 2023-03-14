#include <iostream>
#include<cmath>
using namespace std;
class B {
    int b;
public:
    B(int x) { b = x; };
    void show_B() { cout << "B: " << b << "\n"; }
};
class D1 : private B {
    int d1;
public:
    D1(int x, int y) : B(y) { d1 = x; };
    void show_D1() { cout << "D1: " << d1 << endl; show_B(); }
};
class D2 : public B {
    int d2;
public:
    D2(int x, int y) : B(y) { d2 = x; };
    void show_D2() { cout << "D2: " << d2 << endl; show_B(); }
};
class D3 : protected D1 {
    int d3;
public:
    D3(int x, int y, int z) : D1(y, z) { d3 = x; }
    void show_D3() { cout << "D3: " << d3 << endl; show_D1(); }
};

class D4 : public D1, private D2, protected B {
    int d4;
public:
    D4(int x, int y, int z, int i, int j) : D1(y, z), D2(i, j), B(y) { d4 = x; }
    void show_D4() { cout << "D4: " << d4 << endl; show_D1(); show_D2(); }
};
int main() {
    D3 temp(100, 200, 300);
    D4 temp1(1, 2, 3, 4, 5);
    cout << "D3 temp(100,200,300);\n";
    cout << "D4 temp1(1,2,3,4,5);\n";
    cout << "\n Відповідно до ієрархії класу D3: \n";
    temp.show_D3();
    cout << "\n Відповідно до ієрархії класу D4\n";
    temp1.show_D4();
    return 0;
}