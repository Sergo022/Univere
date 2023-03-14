
#include <iostream>
#include <string>
using namespace std;
class Animal {
    int weight;
public:
    void setWeight(int w) {
        weight = w;
    };
    int getWeight() {
        return weight;
    };
    void move() {
        cout << " � ���� ��������" << endl;
    };
};
class Mammal : public Animal {
    int age;
public:
    void setAge(int a) {
        age = a;
    };
    int getAge() {
        return age;
    };
    void toLiveOnLand() {
        cout << "� ���� �� ����" << endl;
    };
};
class Reptile : public Animal {
    int height;
public:
    void setHeight(int h) {
        height = h;
    };
    int getHeight() {
        return height;
    };
    void toLiveInWater() {
        cout << "� ���� � ���" << endl;
    };
};
class Dog : public Mammal {
    string poroda;
public:
    void setPoroda(string p) {
        poroda = p;
    };
    string getPoroda() {
        return poroda;
    };
    void toLi() {
        cout << "� ��� �������" << endl;
    };
};
class Horse : public Mammal {
    string color;
public:
    void setColor(string c) {
        color = c;
    };
    string getColor() {
        return color;
    };
    void toLiRun() {
        cout << "� ������ ����" << endl;
    };
};
class Working : public Dog {
    int AGE;
public:
    void setAGE(int A) {
        AGE = A;
    };
    int getAGE() {
        return AGE;
    };
    void toLiS() {
        cout << "� �������" << endl;
    };
};
class Sporting : public Dog {
    int sprint;
public:
    void setSprint(int s) {
        sprint = s;
    };
    int getSprint() {
        return sprint;
    };
    void toLiSH() {
        cout << "� �������" << endl;
    };
};
class Terriers : public Dog {
    int growth;
public:
    void setGrowth(int g) {
        growth = g;
    };
    int getGrowth() {
        return growth;
    };
    void toLiGR() {
        cout << "� �������� �����" << endl;
    };
};
class Retrievers : public Sporting {
    string COLOR;
public:
    void setCOLOR(string C) {
        COLOR = C;
    };
    string getCOLOR() {
        return COLOR;
    };
    void toLiDR() {
        cout << "� ������" << endl;
    };
};
class Spaniels : public Sporting {
    int trick;
public:
    void setTrick(int tr) {
        trick = tr;
    };
    int getTrick() {
        return trick;
    };
    void toLiMS() {
        cout << "� ���������" << endl;
    };
};
class Labradors : public Retrievers {
    int length;
public:
    void setLength(int ln) {
        length = ln;
    };
    int getLength() {
        return length;
    };
    void toLiPD() {
        cout << "� ����������� ������" << endl;
    };
};
class Goidens : public Retrievers {
    int HEIGHT;
public:
    void setHEIGHT(int in) {
        HEIGHT = in;
    };
    int getHEIGHT() {
        return HEIGHT;
    };
    void toLiPSH() {
        cout << "� �������" << endl;
    };
};
int main()
{
    Reptile frog;
    cout << "� ���� : " << endl;
    cout << "�� ��� - ";
    frog.setHeight(10);
    cout << frog.getHeight() << endl;
    cout << "��� ���� -";
    frog.setWeight(2);
    cout << frog.getWeight() << endl;
    frog.move();
    frog.toLiveInWater();
    cout << endl;

    Mammal cat;
    cout << "� �� : " << endl;
    cout << "��� ���� -";
    cat.setWeight(4);
    cout << cat.getWeight() << endl;
    cout << "�� �� -";
    cat.setAge(9);
    cout << cat.getAge() << endl;
    cat.move();
    cat.toLiveOnLand();
    cout << endl;

    Dog doberman;
    cout << "� ������ : " << endl;
    cout << "��� ������ ";
    doberman.setPoroda("��������");
    cout << doberman.getPoroda() << endl;
    doberman.toLiveOnLand();
    doberman.toLi();
    cout << "�� �� -";
    doberman.setAge(5);
    cout << doberman.getAge() << endl;

    cout << endl;

    Horse black;
    cout << "� ��� : " << endl;
    cout << "��� ����� ";
    black.setColor("�����");
    cout << black.getColor() << endl;
    black.toLiveOnLand();
    black.toLiRun();
    cout << "�� �� -";
    black.setAge(5);
    cout << black.getAge() << endl;
    cout << endl;

    Working dog;
    cout << "� ������ ������ : " << endl;
    cout << "�� �� -";
    dog.setAGE(9);
    cout << dog.getAGE() << endl;
    dog.toLiS();
    cout << "��� ������ ";
    dog.setPoroda("�����");
    cout << dog.getPoroda() << endl;
    dog.toLi();
    cout << endl;

    Sporting DOG;
    cout << "� ���������  ������ : " << endl;
    cout << "��� ��������-";
    DOG.setSprint(50);
    cout << DOG.getSprint() << endl;
    DOG.toLiSH();
    cout << "��� ������ ";
    DOG.setPoroda(" ���������");
    cout << DOG.getPoroda() << endl;
    DOG.toLi();
    cout << endl;

    Terriers DoG;
    cout << "� ������ ���� : " << endl;
    cout << "�� ���-";
    DoG.setGrowth(20);
    cout << DoG.getGrowth() << endl;
    DoG.toLiGR();
    cout << "��� ������ ";
    DoG.setPoroda("��������");
    cout << DoG.getPoroda() << endl;
    DoG.toLi();
    cout << endl;

    Retrievers Sporting;
    cout << "� ������ �������� : " << endl;
    cout << "�� ����-";
    Sporting.setCOLOR("����������");
    cout << Sporting.getCOLOR() << endl;
    Sporting.toLiDR();
    cout << "��� �������� - ";
    Sporting.setSprint(50);
    cout << Sporting.getSprint() << endl;
    Sporting.toLiSH();
    cout << endl;

    Spaniels SPORTING;
    cout << "� ������ ������ : " << endl;
    cout << " ���� ������ �����-";
    SPORTING.setTrick(12);
    cout << SPORTING.getTrick() << endl;
    SPORTING.toLiMS();
    cout << "��� �������� - ";
    SPORTING.setSprint(50);
    cout << SPORTING.getSprint() << endl;
    SPORTING.toLiSH();
    cout << endl;

    Labradors Retrievers;
    cout << "� ������ �������� : " << endl;
    cout << "��� ������� -  ";
    Retrievers.setLength(100);
    cout << Retrievers.getLength() << endl;
    Retrievers.toLiPD();
    cout << "�� ����-";
    Retrievers.setCOLOR("����");
    cout << Retrievers.getCOLOR() << endl;
    Retrievers.toLiDR();
    cout << endl;

    Goidens RETRIVERS;
    cout << "� ������  Goidens: " << endl;
    cout << "� ������� -  ";
    RETRIVERS.setHEIGHT(70);
    cout << RETRIVERS.getHEIGHT() << endl;
    RETRIVERS.toLiPSH();
    cout << "�� ����-";
    RETRIVERS.setCOLOR("����");
    cout << RETRIVERS.getCOLOR() << endl;
    RETRIVERS.toLiDR();


}
