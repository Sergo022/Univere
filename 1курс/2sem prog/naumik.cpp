#include <iostream>

using namespace std;

class material {
    string type;
    string name;
    string pruroda;
public:

    material(string t, string n, string pr) {
        type = t;
        name = n;
        pruroda = pr;

        cout << "material created" << endl;
    };
    ~material() {
        cout << "material deleted" << endl;
    };
};


class Fprustos {
    string NAME;
    int age;
public:
    Fprustos(string N, int a)
    {
        NAME = N;
        age = a;
        cout << "Fprustos created" << endl;
    };
    ~Fprustos() {
        cout << "Fprustos deleted" << endl;
    };
};

class mebli : public Fprustos, public material {
    string TYPE;
    string name_v;
public:
    mebli(string t, string n, string pr, string N, int a, string T, string nv) :
        Fprustos(N, a), material(t, n, pr) {
        TYPE = T;
        name_v = nv;
        cout << "mebli created" << endl;
        cout << "Тип матеріалу: " << a << '\t' << "НАзва матеріалу: " << n << '\t' << "Природність: " << pr << '\t' << "назва пристосування: " << N
            << '\t' << "вікові рекомендації: " << a << '\t' << "ТИп: " << T << '\t' << "НАзва: " << nv << endl;
    };
    ~mebli() {
        cout << "mebli deleted" << endl;
    }
};


int main() {

    mebli OBJ("дерево", "дуб", "незнаю", "меблі в кімнату", 20, "ivri", "irhv");


}
