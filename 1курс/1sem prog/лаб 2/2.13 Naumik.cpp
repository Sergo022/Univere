#include <iostream>
using namespace  std;
int main()
{
    setlocale(LC_CTYPE, "ukr");
    float x, y;
    cout << " ¬ведiть х :";
    cin >>x ;
    if (x <= -3) {
        y = 27 * x * x + 1;
        cout << " у = " << y << endl;
    }
    else 
    {
        if (-3 < x < 5)
        {
         y = x - 2;
         cout << " у = " << y << endl;
        }
            else 
            {
              if (x >= 5) 
              {
               y = 3 * x + 1;
               cout << " у = " << y << endl;
              }
            }
    }
    return 0;
}
