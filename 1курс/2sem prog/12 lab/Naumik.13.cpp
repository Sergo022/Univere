#include <iostream>
using namespace std;
class E1 {
    int e1;
public:
    E1(int e1) {
        this->e1 = e1;
        cout << "E1 created : " << e1 << "\n";
    }
    E1() {
        cout << "E1 created" << endl;
    }
    ~E1() {
      //  cout << "deleted E1" << endl;
    }

};
class D1 : public E1 {
    int d1;
public:
    D1(int e1, int d1) : E1(e1) {
        this->d1 = d1;
        cout << "D1 created: " << d1 << endl;
    }
    D1() {
        cout << "D1 created" << endl;
    }
    ~D1() {
       // cout << "deleted D1" << endl;
    }
};
class C1 : private D1 {
    int c1;
public:
    C1(int e1, int d1, int c1) : D1(e1, d1) {
        this->c1 = c1;
        cout << "C1 created: " << c1 << endl;
    }
    C1() {
        cout << "C1 created" << endl;
    }
    ~C1() {
      //  cout << "deleted C1" << endl;
    }
};
class C2 : public D1 {
    int c2;
public:
    C2(int e1, int d1, int c2) : D1(e1, d1) {
        this->c2 = c2;
        cout << "C2 created: " << c2 << endl;
    }
    C2() {
        cout << "C2 created" << endl;
    }
    ~C2() {
      //  cout << "deleted C2" << endl;
    }
};

class B1 : protected C1, private C2 {
    int b1;
public:
    B1(int e1_1, int e1_2, int d1_1, int d1_2, int c1, int c2, int b1) : C1(e1_1, d1_1, c1), C2(e1_2, d1_2, c2) {
        this->b1 = b1;
        cout << "B1 created: " << b1 << endl;
    }
    B1() {
        cout << "B1 created" << endl;
    }
    ~B1() {
      //  cout << "deleted B1" << endl;
    }
};
class C3 {
    int c3;
public:
    C3(int c3) {
        this->c3 = c3;
        cout << "C3 created : " << c3 << "\n";
    }
    C3() {
        cout << "C3 created" << endl;
    }
    ~C3() {
       // cout << "deleted C3" << endl;
    }

};
class B2 : public C1, private C2, protected C3 {
    int b2;
public:
    B2(int e1_1, int e1_2, int d1_1, int d1_2, int c1, int c2, int c3, int b2) : C1(e1_1, d1_1, c1), C2(e1_2, d1_2, c2), C3(c3) {
        this->b2 = b2;
        cout << "B2 created: " << b2 << endl;
    }
    B2() {
        cout << "B2 created" << endl;
    }
    ~B2() {
      //  cout << "deleted B2" << endl;
    }
};
class B3 : protected C2, private C3 {
    int b3;
public:
    B3(int e1, int d1, int c2, int c3, int b3) : C2(e1, d1, c2), C3(c3) {
        this->b3 = b3;
        cout << "B3 created: " << b3 << endl;
    }
    B3() {
        cout << "B3 created" << endl;
    }
    ~B3() {
      //  cout << "deleted B3" << endl;
    }
};

class A2 : public B1, private B2, public B3 {
    int a2;
public:
    A2(int e1_1, int e1_2, int d1_1, int d1_2, int c1, int c2, int b1, int a2)
        : B1(e1_1, e1_2, d1_1, d1_2, c1, c2, b1),
        B2(),
        B3() {
        this->a2 = a2;
        cout << "A2 created: " << a2 << endl;
    }
    A2() {
        cout << "A2 created" << endl;
    }
    ~A2() {
      //  cout << "deleted A2" << endl;
    }
};
class A3 : public B2, protected B3 {
    int a3;
public:

    A3(int e1_1, int e1_2, int d1_1, int d1_2, int c1, int c2, int c3, int b2, int a3)
        : B2(e1_1, e1_2, d1_1, d1_2, c1, c2, c3, b2),
        B3() {
        this->a3 = a3;
        cout << "A3 created: " << a3 << endl;
    }
    A3() {
        cout << "A3 created" << endl;
    }
    ~A3() {
      //  cout << "deleted A3" << endl;
    }
};
int main()
{
    cout << "A2: " << endl;
    A2 obj1(5, 7, 4, 6, 4, 5, 3, 4);
    cout << "A3: " << endl;
    A3 obj2(10, 11, 5, 6, 7, 10, 2, 4, 3);
    cout << "Done Creating\nDeleting: " << endl;
}
