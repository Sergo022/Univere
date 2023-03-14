#include <iostream>
#include <queue>  

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    queue <int> queue;
    int input;
    while (input != 5)
    {
        cout << endl;
        cout << "1. показати розмір" << endl;
        cout << "2. показати верхній елемент" << endl;
        cout << "3. перевірити чи черга  порожня" << endl;
        cout << "4. прочитати елемент " << endl;
        cout << "5. завершити роботу " << endl;
        cout << "6. додати елемент " << endl;

        cin >> input;
        if (input == 1)
        {
            if (queue.empty())
            {
                cout << "Черга пустий ";
            }
            else
            {
                cout << "розмір - " << queue.size() << endl;
            }

        }
        else
        {
            if (input == 2)
            {
                if (queue.empty())
                {
                    cout << "Черга пуста ";
                }
                else
                {
                    cout << "Верхній елемент : " << queue.front() << endl;
                }

            }
            else
            {
                if (input == 3)
                {
                    if (queue.empty())
                    {
                        cout << "Черга пуста ";
                    }
                    else
                    {
                        cout << "Черга заповнена" << endl;
                    }
                }
                else
                {
                    if (input == 4)
                    {
                        if (queue.empty())
                        {
                            cout << "Черга  пуста ";
                        }
                        else
                        {
                            queue.pop();
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

                                queue.push(a);
                            }
                        }

                    }
                }
            }
        }
    }
}