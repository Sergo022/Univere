#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "ru");
    int arr[10];
    int i;
    int z;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 30;
        cout << arr[i] << " ";
        if (i > 0)
        {
            if (arr[i] < arr[i - 1])
            {
                z = 0;
            }
        }
    }
    cout << endl;
    if (z== 0)
    {
        cout << "Елементи масиву  утворюють зростаюeц послідовність"<<endl;
    }
    else
    {
        cout << " Елементи масиву утворюють незростаючу послідовність"<<endl;
    }
}