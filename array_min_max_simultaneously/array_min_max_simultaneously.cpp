// array_min_max_simultaneously.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <tchar.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
const int N = 10;

int main()
{
 //0.��������������� ��������.
    srand(time(0));
    int a = 10, b = 89;
    int i;//���������� �����
 //1.���������� � ���������� ���.
    long mas[N] = {}, maxx,minn;
    for (i = 0; i < N; i++)
    {
        mas[i] = a + rand() % (b - a);
        cout << mas[i] << ' ';
    }
    cout << '\n';
 //2.������ � ��������.
    minn = maxx = mas[0];
    for (i = 0; i < N; i++) {
        if (mas[i] > maxx)
            maxx = mas[i];
        if (mas[i] < minn)
            minn = mas[i];
    }

 //3.����� ����������
    cout << "All mushrooms are in [" << minn << ';' << maxx << "]\n";
    return 0;

}

