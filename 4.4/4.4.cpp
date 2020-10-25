// 4.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// < Коровицький Тарас >
// Лабораторна робота № 4.4
//Табуляція функції, заданої графіком
// Варіант 13
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x1, x2,R,y;
	cout << "x1 = "; cin >> x1;
	cout << "x2 = "; cin >> x2;
	cout << "R = "; cin >> R;
    
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x1" << " |"
		<< setw(7) << "x2" << " |"
		<< setw(9) << "y" << " |"<< endl;
	cout << "---------------------------" << endl;
	
	{
		if (x1 <= -R)
			y = ((R * (-1 * R)) / R) + R;
		else
			if (x1 > -R && x1 <= 0)
				y = sqrt((R * R) - (x1 * x1));
			else
				if (x2 > 0 && x2 <= 6)
					y = ((-1 * R) * x2) / 6;
				else
					y = (R * (x2 - 6)) / 6;
		cout << "|" << setw(7) << setprecision(2) << x1
			<< "|" << setw(8) << setprecision(2) << x2
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		
	}
	cout << "---------------------------" << endl;
	return 0;
}