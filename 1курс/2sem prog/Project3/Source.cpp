#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class SKLAD {
    string name;
    //   string type;
    int Quantity;
    float Cost;
public:
    void SetName() {
        string newName;
        cin >> newName;
        name = newName;
    };
    //   void SetType(){
    //     string newType;
    //     cin>>newType;
    //     type = newType;
    //   };
    void SetQuantity() {
        int newQuantity;
        cin >> newQuantity;
        Quantity = newQuantity;
    };
    void SetCost() {
        float newCost;
        cin >> newCost;
        Cost = newCost;
    };
    void printSklad() {
        cout << name << " " << Quantity << " " << Cost << endl;
    };
    string GetName() {
        return name;
    };
    int GetQuantity() {
        return Quantity;
    };
    float GetCost() {
        return Cost;
    };        
};



int main() {
    SKLAD  SHOP[2];
    for (int i = 0; i < 2; i++) {
        SHOP[i].SetName();
        // SHOP[i].SetType();
        SHOP[i].SetQuantity();
        SHOP[i].SetCost();
    }
    for (int i = 0; i < 2; i++) {
        SHOP[i].printSklad();
    };
    string tmp;
    bool f = false;
    cout << "Input the name of the item ";
    cin >> tmp;
    for (int i = 0; i < 3; i++) {
        if (tmp == SHOP[i].GetName()) {
            cout << SHOP[i].GetQuantity() << " " << SHOP[i].GetCost() << endl;
            f = true;
        }
    }
    if (!f) {
        cout << "There is no such item in the shop";
    }



    return 0;
};