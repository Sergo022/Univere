#include <iostream>
#include "Cdate.h"
using namespace std;

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
