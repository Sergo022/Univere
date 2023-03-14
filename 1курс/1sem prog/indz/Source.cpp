#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string Arrey;
    cout << "¬вед≥ть текст :" << endl;
    getline(cin, Arrey);
    int count[26] = { 0 };

    for (int i = 0; i < Arrey.length(); i++) {
        if (Arrey[i] >= 'a' && Arrey[i] <= 'z') {
            ++count[toupper(Arrey[i]) - 'A'];
        }
    }
    for (int i = 0; i < 26; ++i) {
        cout << char('A' + i) << " = " << count[i] << ";   ";
    }
    return 0;
}