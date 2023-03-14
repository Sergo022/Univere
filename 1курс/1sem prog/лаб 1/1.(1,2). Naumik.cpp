#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int c, g;
	double b, d, S;
	cout << "                                          ���������� �������i ���������� ���i���." << endl;
	cout << " ����i�� ����i��� ���������� �� ���� " << endl;
	cin >> b;
	cout << "����i�� ����� ��� ������� �i���i��� ����� " << endl;
	cin >> c;
	cout << "����i�� �i���i��� ��������" << endl;
	cin >> d;
	cout << "����������� ��i� ���������(� �i�������)" << endl;
	cin >> g;
	S = (c * b) + (d * g * b) / 100;
	cout << "���������� ���i��� �����=" << S << endl << endl;
	return 0;
}

/*	setlocale(LC_CTYPE, "Ukr");                                       //�������� ����������
	double h = 0, m, s, P;
	cout << "����i�� ����� �i� 0 �� 59.9 ��� ���� ��������� �������" << endl;
	cin >> m;
	cout << "����i�� ����� �i� 0 �� 59.9 ��� ���� ��������� �������" << endl;
	cin >> s;
	P = (m * 60 + s) * 360 / 43200;
	cout << "�������� �i�� ���� = " << P << endl;
}*/