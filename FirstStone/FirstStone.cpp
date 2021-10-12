// FirstStone.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <math.h>
const double G = 9.81;
int main()
{
	double v0,h;
	cout << "v0->";
	cin >> v0;
//
	h = v0 * v0 / (2 * G);
//
	cout << "Height=" << h << '\n';
	return 0;
}
