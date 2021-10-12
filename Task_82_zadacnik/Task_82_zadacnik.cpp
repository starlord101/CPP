// Task_82_zadacnik.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
#include <Windows.h>

int main()
{
    //1. ќбъ€вление переменных
    double x, a = 1, b = 1, c;
    int i;
    MessageBox(0, "If input x is from 0 to 64 results will be incorrect due to dividing to zero.", "Important information", MB_OK | MB_ICONINFORMATION);
    cout << "Input x->";
    cin >> x;
  //2. Ќаписание циклов дл€ числител€ и знаменател€, которые €вл€ютс€ геометрической прогрессией
    i = 2;
    while (a <= 64)
    {
        a *= (x - i);
        i *= 2;
    }
    i = 1;
    while (b <= 63)
    {
        b *= (x - i);
        i *= 2 + 1;
    }
   //3.–ешение уравнени€ и вывод ответа в консоль.
    c = a / b;
    cout << "Result = " << c << '\n';

    return 0;
}

