#include <iostream>
#include <deque>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    deque <int> deque;
    int input;
    while (input!= 5)
    {
        cout << endl;
        cout << "1. показати розмір" << endl;
        cout << "2. показати верхній елемент" << endl;
        cout << "3. перевірити чи дек пустий" << endl;
        cout << "4. прочитати елемент " << endl;
        cout << "5. додати елемент " << endl;
        cout << "6. завершити роботу " << endl << endl;


        cin >> input;
        if (input == 1)
        {
            if (deque.empty())
            {
                cout << "Дек  пуста ";
            }
            else
            {
                cout << "розмір - " << deque.size() << endl;
            }
        }
        else
        {
            if (input == 2)
            {
                if (deque.empty())
                {
                    cout << "дек  пустий ";
                }
                else
                {
                    cout << "Верхній елемент : " << deque.front() << endl;
                }

            }
            else
            {
                if (input == 3)
                {
                    if (deque.empty())
                    {
                        cout << "дек  пустий  ";
                    }
                    else
                    {
                        cout << "дек  заповнений" << endl;
                    }
                }
                else
                {
                    if (input == 4)
                    {
                        if (deque.empty())
                        {
                            cout << "дек  пустий  ";
                        }
                        else
                        {
                            deque.pop_front();
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

                                deque.push_front(a);
                            }
                        }

                    }
                }
            }
        }
    }
}