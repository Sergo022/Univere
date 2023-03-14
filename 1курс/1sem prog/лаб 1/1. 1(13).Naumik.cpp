#include<iostream>
#include <math.h> 
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Ukr");
	double a, x, l;	
	cout << setprecision(2);
	x = -2.1;
	l = (exp((2 * x) - 1.3)) / (pow(sqrt(abs(x) + 2), 1 / 3));
	a = 1 + l / 3;
	cout << "x = "<< x << endl;
	cout <<"l = "<< l << endl;
	cout <<"a = "<< a << endl;




}
