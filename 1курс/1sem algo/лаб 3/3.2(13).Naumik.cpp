#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float x, y, x0,y0,R,a,b,c;
	cout <<"A" <<endl;
	cout << "Введіть х :";
	cin >> x;
	cout << endl;
	cout << "Введіть y :";
	cin >> y;
	cout << endl;
	if ((x * x + (y - 1) * (y - 1) < 1) && (-x * x + 1 >= 0))      
	{
		cout << "Задана точка потрапляє в область" << endl;
	}
	else {
		cout << "Задана точка непотрапляє в область"<<endl;
	}
	cout <<"B" <<endl;
	cout << endl;
	cout << "Введіть х :";
	cin >> x;
	cout << endl;
	cout << "Введіть y :";
	cin >> y;
	cout << endl;
	if ((x*x)+(y*y)<=1 && (y <= x/2))
	{
		cout << "Задана точка потрапляє в область" << endl;
		cout << endl;
	}
	
	else
	{
		cout << "Задана точка непотрапляє в область" << endl;
		cout << endl;
	}
	
	
	
 }