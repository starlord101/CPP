// Task_100.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	//1.���������� ����������
	double matr[2][2] = {};
	double det;
	//2.���� ��������
	cout << "a,b,c,d ->";
	cin >> matr[0][0] >> matr[0][1] >> matr[1][0] >> matr[1][1];

	//3. ���������� ������������ �������
	det = matr[0][0] * matr[1][1] - matr[1][0] * matr[0][1];
	cout << matr[0][0] <<"  "<< matr[0][1] << '\n';
	cout << matr[1][0] <<"  "<< matr[1][1] << '\n';
	cout << "Determinant is equal to " << det <<'.'<< '\n';
}

