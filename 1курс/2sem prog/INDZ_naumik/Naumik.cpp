#include <iostream>

using namespace std;


class Character {
    int power;
public:
    Character()
    {
        this->power = 80;
    }
    Character(int power)
    {
        this->power = power;
    }
    int getPower() const {
        return power;
    }

    void setPower(int power) {
        Character::power = power;
    }


};

class AntiHero;
class Hero;
class Hero : public Character
{
    int speed;
    int health;

public:
    Hero() : Character() {
        this->speed = 75;
        this->health = 600;
    }
    Hero(int power, int  speed, int health) : Character(power) {
        this->speed = speed;
        this->setPower(power);
        this->health = health;

    }

    float getSpeed() const {
        return speed;
    }

    void setSpeed(float speed) {
        Hero::speed = speed;
    }

    int getHealth() const {
        return health;
    }

    void setHealth(int health) {
        Hero::health = health;
    }


};

class AntiHero : public Character
{
    bool help;
public:
    bool isHelp() const {
        return help;
    }

    void setHelp(bool help) {
        AntiHero::help = help;
    }

    AntiHero() : Character()
    {
        this->help = true;
    }
    AntiHero(bool help, int power) : Character(power) {
        this->help = help;
        this->setPower(power);
    }

};
void interactionHH(Hero hero1, Hero hero2) {
    hero1.setHealth(hero1.getHealth() + hero2.getHealth());
    cout << "взаємодія зі здоров'ям героїв Сергія і Олега  : " << hero1.getHealth() << endl;

}
void interactionHA(Hero hero1, AntiHero antiHero1) {
    hero1.setPower(hero1.getPower() - antiHero1.getPower());
    cout << "Бійка героя Сергія  і антигероя  Богдана  " << hero1.getPower() << "  ============   ";
    if (hero1.getPower() < 0) {
        cout << "переміг антигерой" << endl;
    }
    else {
        cout << "переміг герой " << endl;
    }
}
void interactionAA(AntiHero antiHero1, AntiHero antiHero2) {
    if (antiHero1.isHelp()) {
        antiHero1.setPower(antiHero1.getPower() + antiHero2.getPower());
        cout << " допомога Богдану від Міші  " << antiHero1.getPower() << endl;
    }
}

void interactionAH(AntiHero antiHero2, Hero hero2) {
    antiHero2.setPower(antiHero2.getPower() - hero2.getPower());
    cout << "бійка антигероя Міши і героя ОЛега = " << antiHero2.getPower() << "  ==========  ";
    if (antiHero2.getPower() < 0) {
        cout << "Переміг герой " << endl;

    }
    else {
        cout << "Переміг антигерой" << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    Hero Serhii;
    Hero Oleg = Hero(800, 450, 180);
    cout << " герой Сергій : сила =  " << Serhii.getPower() << "   speed  " << Serhii.getSpeed() << "   health : " << Serhii.getHealth() << endl;
    cout << " герой Олег : сила =  " << Oleg.getPower() << "   speed  " << Oleg.getSpeed() << "   health : " << Oleg.getHealth() << endl;


    AntiHero bogdan = AntiHero(true, 5000);
    AntiHero Misha = AntiHero(true, 2000);
    cout << "Антигерой Богдан сила :  " << bogdan.getPower() << endl;
    cout << "Анитигерой Міша сила :  " << Misha.getPower() << endl;

    interactionAA(bogdan, Misha);
    interactionAH(Misha, Oleg);
    interactionHA(Serhii, bogdan);
    interactionHH(Oleg, Serhii);
}
