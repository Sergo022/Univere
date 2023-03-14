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
        cout << "1. �������� �����" << endl;
        cout << "2. �������� ������ �������" << endl;
        cout << "3. ��������� �� �����  �������" << endl;
        cout << "4. ��������� ������� " << endl;
        cout << "5. ��������� ������ " << endl;
        cout << "6. ������ ������� " << endl;

        cin >> input;
        if (input == 1)
        {
            if (queue.empty())
            {
                cout << "����� ������ ";
            }
            else
            {
                cout << "����� - " << queue.size() << endl;
            }

        }
        else
        {
            if (input == 2)
            {
                if (queue.empty())
                {
                    cout << "����� ����� ";
                }
                else
                {
                    cout << "������ ������� : " << queue.front() << endl;
                }

            }
            else
            {
                if (input == 3)
                {
                    if (queue.empty())
                    {
                        cout << "����� ����� ";
                    }
                    else
                    {
                        cout << "����� ���������" << endl;
                    }
                }
                else
                {
                    if (input == 4)
                    {
                        if (queue.empty())
                        {
                            cout << "�����  ����� ";
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
                            cout << "������ ������� - ";
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