#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class STUDENT {
    string name;
    int Year;
    float Bal;
public:
    int summa = 0;
    void SetName() {
        string newName;
        cout << "введіть імя ";
        cin >> newName;
        name = newName;
    };
    void SetYear() {
        int newYear;
        cout << "введіть рік народження ";
        cin >> newYear;
        Year = newYear;
    };
    void SetBal() {
        float newBal;

        for (int i = 0; i < 4; i++) {
            cout << "оцінка за предмет ";
            cin >> newBal;
            summa += newBal;
        };
        Bal = newBal;
    };

    void printSTUDENT() {
        if (summa > 16) {
            cout << name << " " << Year << endl;
        };
    };
    string GetName() {
        return name;
    };
    int GetYear() {
        return Year;
    };
    float GetBal() {
        return Bal;
    };
};

int main() {
    STUDENT Group[3];
    for (int i = 0; i < 3; i++) {
        Group[i].SetName();
        Group[i].SetYear();
        Group[i].SetBal();
    }

    for (int i = 0; i < 3; i++) {
        Group[i].printSTUDENT();
    };

};