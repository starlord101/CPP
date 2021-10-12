// Reverse.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    //0.Вспомогательные действия.
    srand(time(0));
    int a = 10, b = 89;
    int i;//объявление цикла
 //1.Объявление и заполнение его.
    long mas[N] = {};
    for (i = 0; i < N; i++)
    {
        mas[i] = a + rand() % (b - a);
        cout << mas[i] << ' ';
    }
    cout << '\n';
    //2. Обмен переменными.
    for (i = 0; i < N / 2; i++)
        swap(mas[i], mas[N - 1 - i]);
    //3. Вывод результатов
    cout << "_____________________________\n\n";
    for (auto x : mas)
        cout << x << ' ';
    cout << '\n';
    return 0;
}


