// Task_102.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	//1.Объявление переменных
	double matr[3][3] = {};
	double lines, rows, diagonals;
	double magic=0;
	//2.Ввод значений
	cout << "a,b,c,d,e,f,g,h,i ->";
	cin >> matr[0][0] >> matr[0][1] >> matr[0][2] >> matr[1][0] >> matr[1][1] >> matr[1][2] >> matr[2][0] >> matr[2][1] >> matr[2][2];
	//3.Проверка, является матрица "магическим квадратом"
	lines = ((matr[0][0] + matr[0][1] + matr[0][2]) + (matr[1][0] + matr[1][1] + matr[1][2]) + (matr[2][0] + matr[2][1] + matr[2][2])) / 3;
	rows = ((matr[0][0] + matr[1][0] + matr[2][0]) + (matr[0][1] + matr[1][1] + matr[2][1]) + (matr[0][2] + matr[1][2] + matr[2][2])) / 3;
	diagonals = ((matr[0][0] + matr[1][1] + matr[2][2]) + (matr[2][0] + matr[1][1] + matr[0][2])) / 2;

	if ((lines == rows)&& (lines == diagonals)&&(rows==diagonals))
		cout << "It's magic square!";
	
	else
		cout << "it's not magic square :(";
	return 0;
}
