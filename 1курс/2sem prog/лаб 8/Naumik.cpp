
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
        cout << " я можу рухатись" << endl;
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
        cout << "я живу на землі" << endl;
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
        cout << "я живу у воді" << endl;
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
        cout << "я вмію гавкати" << endl;
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
        cout << "я швидко бігаю" << endl;
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
        cout << "я сильний" << endl;
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
        cout << "я швидкий" << endl;
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
        cout << "я низького росту" << endl;
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
        cout << "я добрий" << endl;
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
        cout << "я мисливець" << endl;
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
        cout << "я підрушничний собака" << endl;
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
        cout << "я рідкісний" << endl;
    };
};
int main()
{
    Reptile frog;
    cout << "я жаба : " << endl;
    cout << "мій ріст - ";
    frog.setHeight(10);
    cout << frog.getHeight() << endl;
    cout << "моя вага -";
    frog.setWeight(2);
    cout << frog.getWeight() << endl;
    frog.move();
    frog.toLiveInWater();
    cout << endl;

    Mammal cat;
    cout << "я кіт : " << endl;
    cout << "моя вага -";
    cat.setWeight(4);
    cout << cat.getWeight() << endl;
    cout << "мій вік -";
    cat.setAge(9);
    cout << cat.getAge() << endl;
    cat.move();
    cat.toLiveOnLand();
    cout << endl;

    Dog doberman;
    cout << "я собака : " << endl;
    cout << "моя порода ";
    doberman.setPoroda("доберман");
    cout << doberman.getPoroda() << endl;
    doberman.toLiveOnLand();
    doberman.toLi();
    cout << "мій вік -";
    doberman.setAge(5);
    cout << doberman.getAge() << endl;

    cout << endl;

    Horse black;
    cout << "я кінь : " << endl;
    cout << "моя масть ";
    black.setColor("чорна");
    cout << black.getColor() << endl;
    black.toLiveOnLand();
    black.toLiRun();
    cout << "мій вік -";
    black.setAge(5);
    cout << black.getAge() << endl;
    cout << endl;

    Working dog;
    cout << "я робоча собака : " << endl;
    cout << "мій вік -";
    dog.setAGE(9);
    cout << dog.getAGE() << endl;
    dog.toLiS();
    cout << "моя порода ";
    dog.setPoroda("пінчер");
    cout << dog.getPoroda() << endl;
    dog.toLi();
    cout << endl;

    Sporting DOG;
    cout << "я спортивна  собака : " << endl;
    cout << "моя швидкість-";
    DOG.setSprint(50);
    cout << DOG.getSprint() << endl;
    DOG.toLiSH();
    cout << "моя порода ";
    DOG.setPoroda(" грейхаунд");
    cout << DOG.getPoroda() << endl;
    DOG.toLi();
    cout << endl;

    Terriers DoG;
    cout << "я собака терєр : " << endl;
    cout << "мій ріст-";
    DoG.setGrowth(20);
    cout << DoG.getGrowth() << endl;
    DoG.toLiGR();
    cout << "моя порода ";
    DoG.setPoroda("бультерєр");
    cout << DoG.getPoroda() << endl;
    DoG.toLi();
    cout << endl;

    Retrievers Sporting;
    cout << "я собака ретривер : " << endl;
    cout << "мій колір-";
    Sporting.setCOLOR("золотистий");
    cout << Sporting.getCOLOR() << endl;
    Sporting.toLiDR();
    cout << "моя швидкість - ";
    Sporting.setSprint(50);
    cout << Sporting.getSprint() << endl;
    Sporting.toLiSH();
    cout << endl;

    Spaniels SPORTING;
    cout << "я собака спанієль : " << endl;
    cout << " знаю багато трюків-";
    SPORTING.setTrick(12);
    cout << SPORTING.getTrick() << endl;
    SPORTING.toLiMS();
    cout << "моя швидкість - ";
    SPORTING.setSprint(50);
    cout << SPORTING.getSprint() << endl;
    SPORTING.toLiSH();
    cout << endl;

    Labradors Retrievers;
    cout << "я собака лабрадор : " << endl;
    cout << "моя довжина -  ";
    Retrievers.setLength(100);
    cout << Retrievers.getLength() << endl;
    Retrievers.toLiPD();
    cout << "мій колір-";
    Retrievers.setCOLOR("сірий");
    cout << Retrievers.getCOLOR() << endl;
    Retrievers.toLiDR();
    cout << endl;

    Goidens RETRIVERS;
    cout << "я собака  Goidens: " << endl;
    cout << "я висотою -  ";
    RETRIVERS.setHEIGHT(70);
    cout << RETRIVERS.getHEIGHT() << endl;
    RETRIVERS.toLiPSH();
    cout << "мій колір-";
    RETRIVERS.setCOLOR("білий");
    cout << RETRIVERS.getCOLOR() << endl;
    RETRIVERS.toLiDR();


}
