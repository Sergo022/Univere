#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float x, y,S;
	cout << "������ � :";
	cin >> x;
	cout << "������ y :";
	cin >> y;
	if (x*y>0)
	{
		S = pow((x + y), 2) - pow(sqrt(abs(x)), 1 / 3);
		cout << "S = "<< S << endl;
	}
	else
	{
		if (x * y < 0)
		{
			S = pow((x + y), 2) + sin(x);
			cout << "S = " << S << endl;
		}
		else
		{
			S = pow((x + y), 2) + (pow(y ,3));
			cout << "S = " << S << endl;
		}
	}

}
