#include <iostream>

using namespace std;

struct Employee
{
    int  tabelnui_nomer;
    int  narodhenna;
    int  robota;
    int  oklad;
};

void Information(Employee dani)
{
    cout << "��������� ����� : " << dani.tabelnui_nomer << endl;
    cout << "г� ����������� : " << dani.narodhenna << endl;
    cout << "г� ������� �� ������ : " << dani.robota << endl;
    cout << "����� : " << dani.oklad << endl;
}

int main()
{
    Employee john = { 1123, 1998, 2017,467 };
    Employee james = { 4322, 1989, 2010,987 };
    Employee sara = { 2344, 1999, 2018,432 };

    if (sara.narodhenna % 10 == 9)
    {
        cout << " Sara" << endl;
        Information(sara);
    }

    cout << endl;

    if (james.narodhenna % 10 == 9)
    {
        cout << " James" << endl;
        Information(james);
    }

    cout << endl;

    if (john.narodhenna % 10 == 9)
    {
        cout << " John" << endl;
        Information(john);
    }
    return 0;
}