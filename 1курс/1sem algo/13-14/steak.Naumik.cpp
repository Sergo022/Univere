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
        cout << "1. �������� �����" << endl;
        cout << "2. �������� ������ �������" << endl;
        cout << "3. ��������� �� ���� �������" << endl;
        cout << "4. ��������� ������� " << endl;
        cout << "5. ��������� ������ " << endl;
        cout << "6. ������ ������� " << endl;

        cin >> input;
        if (input == 1)
        {
            if (steck.empty())
            {
                cout << "���� ������ ";
            }
            else
            {
                cout << "����� - " << steck.size() << endl;
            }
        }

        else
        {
            if (input == 2)
            {
                if (steck.empty())
                {
                    cout << "���� ������ ";
                }
                else
                {
                    cout << "������ ������� : " << steck.top() << endl;
                }

            }
            else
            {
                if (input == 3)
                {
                    if (steck.empty())
                    {
                        cout << "���� ������ ";
                    }
                    else
                    {
                        cout << "����������" << endl;
                    }
                }
                else
                {
                    if (input == 4)
                    {
                        if (steck.empty())
                        {
                            cout << "���� ������ ";
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
                            cout << "������ ������� - ";
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