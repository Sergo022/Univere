#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float x, y, x0,y0,R,a,b,c;
	cout <<"A" <<endl;
	cout << "������ � :";
	cin >> x;
	cout << endl;
	cout << "������ y :";
	cin >> y;
	cout << endl;
	if ((x * x + (y - 1) * (y - 1) < 1) && (-x * x + 1 >= 0))      
	{
		cout << "������ ����� ��������� � �������" << endl;
	}
	else {
		cout << "������ ����� ����������� � �������"<<endl;
	}
	cout <<"B" <<endl;
	cout << endl;
	cout << "������ � :";
	cin >> x;
	cout << endl;
	cout << "������ y :";
	cin >> y;
	cout << endl;
	if ((x*x)+(y*y)<=1 && (y <= x/2))
	{
		cout << "������ ����� ��������� � �������" << endl;
		cout << endl;
	}
	
	else
	{
		cout << "������ ����� ����������� � �������" << endl;
		cout << endl;
	}
	
	
	
 }