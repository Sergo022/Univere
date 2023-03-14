#include <iostream>
#include <iomanip>
#include <math.h> 
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Ukr");
	float b, x, y, z;
	x = 8.5 * pow(10, -1);
	y = -15.2;
	z = -1.4 * pow(10, -1);
	b = (x + (pow(sin(abs(y)), 2)) / ((3.f / 5.f) + (pow(cos(pow(z, 2)), 2))));
	cout << b << endl;
}