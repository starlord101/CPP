// Finding Circle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

#include <windows.h>

int main()
{
    //0.
    srand(time(0));
   //1.defining variables
    double a, x, y;
    bool flag;
xyz:    cout << "a->";
    cin >> a;
//2.
    x = -a + fmod(rand(), 2 * a);
    y = -a + fmod(rand(), 2 * a);
    cout << "Point:[" << x << ',' << y << "]\tr=" << sqrt(x * x + y * y) << '\n';
    flag = x * x + y * y <= a * a;
   //3.Setting conditions for point on a plane
    if (flag)
        cout << "Point inside!\n";
    else
        cout << "Point outside!\n";
    if (MessageBox(0, "Do you want to repeate?", "Proceed", MB_YESNO | MB_ICONQUESTION) == IDYES)
        goto xyz;
    return 0;
    

}

