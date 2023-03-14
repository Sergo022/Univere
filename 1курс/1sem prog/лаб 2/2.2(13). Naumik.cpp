#include <iostream>
using namespace  std;
int main()
{
    setlocale(LC_CTYPE, "ukr");
    float x, y;
    cout << " Введiть х : ";
    cin >> x;
    cout << " Введiть y :";
    cin >> y;
    if (-1 <= x <= 1.5)
    {
        if (-0.5 <= y <= 1.5)
        {
            cout << " Задана точка потрапляє в заштриховану область" << endl;
        }
    }
        else
        {
        cout << " Задана точка непотрапляє в заштриховану область" << endl;
        }

}