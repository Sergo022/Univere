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
        cout << "1. �������� �����" << endl;
        cout << "2. �������� ������ �������" << endl;
        cout << "3. ��������� �� ��� ������" << endl;
        cout << "4. ��������� ������� " << endl;
        cout << "5. ������ ������� " << endl;
        cout << "6. ��������� ������ " << endl << endl;


        cin >> input;
        if (input == 1)
        {
            if (deque.empty())
            {
                cout << "���  ����� ";
            }
            else
            {
                cout << "����� - " << deque.size() << endl;
            }
        }
        else
        {
            if (input == 2)
            {
                if (deque.empty())
                {
                    cout << "���  ������ ";
                }
                else
                {
                    cout << "������ ������� : " << deque.front() << endl;
                }

            }
            else
            {
                if (input == 3)
                {
                    if (deque.empty())
                    {
                        cout << "���  ������  ";
                    }
                    else
                    {
                        cout << "���  ����������" << endl;
                    }
                }
                else
                {
                    if (input == 4)
                    {
                        if (deque.empty())
                        {
                            cout << "���  ������  ";
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
                            cout << "������ ������� - ";
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