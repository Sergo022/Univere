#include <iostream>
#include <stack>   

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    stack <int> steck;
    int input;
    while (input != 5)
    {
        cout << endl;
        cout << "1. показати розмір" << endl;
        cout << "2. показати верхній елемент" << endl;
        cout << "3. перевірити чи стек порожній" << endl;
        cout << "4. прочитати елемент " << endl;
        cout << "5. завершити роботу " << endl;
        cout << "6. додати елемент " << endl;

        cin >> input;
        if (input == 1)
        {
            if (steck.empty())
            {
                cout << "Стек пустий ";
            }
            else
            {
                cout << "розмір - " << steck.size() << endl;
            }
        }

        else
        {
            if (input == 2)
            {
                if (steck.empty())
                {
                    cout << "Стек пустий ";
                }
                else
                {
                    cout << "Верхній елемент : " << steck.top() << endl;
                }

            }
            else
            {
                if (input == 3)
                {
                    if (steck.empty())
                    {
                        cout << "Стек пустий ";
                    }
                    else
                    {
                        cout << "заповнений" << endl;
                    }
                }
                else
                {
                    if (input == 4)
                    {
                        if (steck.empty())
                        {
                            cout << "Стек пустий ";
                        }
                        else
                        {
                            steck.pop();
                        }
                    }
                    else
                    {
                        if (input == 6)
                        {
                            int n;
                            cout << "введіть кількість - ";
                            cin >> n;
                            for (int i = 0; i < n; i++)
                            {
                                int a;
                                cin >> a;

                                steck.push(a);
                            }
                        }

                    }



                }
            }

        }

    }


}