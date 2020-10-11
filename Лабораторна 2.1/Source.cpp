// Lab_02.cpp
// < Маковського Андрія>
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 18

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2;// результат обчислення 2-го виразу

	cout << "a = "; cin >> a;

	z1 = ((a+2.0)/sqrt(2*a) - a/(sqrt(2.0*a)+2*1.0) + 2.0/(a-sqrt(2*a))*1.0)*((sqrt(a)-sqrt(2))/(a+2*1.0));
	z2 = 1.0/(sqrt(a) + sqrt(2));

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}