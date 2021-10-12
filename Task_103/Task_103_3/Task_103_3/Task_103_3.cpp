// Task_103_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

//const int N = 12;

int main()
{
    //
    srand(time(0));
    //
    long** matr;
    int i, j, n;
    int maxx;
    //
    cout << "Len->>";
    cin >> n;
    matr = new long* [n];
    for (i = 0; i < n; i++)
        matr[i] = new long[n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            matr[i][j] = 10 + rand() % 89;
            cout << matr[i][j] << "  ";
        }
        cout << '\n';
    }
    //
    cout << "\n____________________________________\n\n";
    maxx = matr[0][0];

    for (i = 0; i <= n/2; i++)
    {
        for (j = 0; j < i; j++)
            cout << "    ";
        
        for (j = i; j < n-i; j++)
        {
            cout << matr[i][j] << "  ";
            if (maxx < matr[i][j])
                maxx = matr[i][j];
        }
        
        cout << '\n';
        
    }
    //
    cout << "Max : " << maxx << '\n';
    //
    for (i = 0; i < n; i++)
        if (matr[i])
            delete[] matr[i];
    if (matr)
        delete[] matr;
    return 0;
}