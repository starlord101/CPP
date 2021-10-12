// Task_103_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include<stdlib.h>

using namespace std;

int main()
{
    //
    srand(time(0));
    //
    int** matr, max1, max2;
    int i, j, n;
    //
    cout << "Len->> ";
    cin >> n;
    matr = new int* [n];

    //
    for (i = 0; i < n; i++)
        matr[i] = new int[n];

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)
        {
            matr[i][j] = 10 + rand() % 89;
            cout << matr[i][j] << "  ";
        }
        cout << '\n';
    }
    cout << "\n____________________________________\n\n";
    //
    max1 = matr[0][0];
    //max2 = matr[0][0];

    for (i = 0; i < n/2 ; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << matr[i][j] << "  ";
            if (max1 < matr[i][j])
                max1 = matr[i][j];
        }
        for (j = i; j < n - i - 1; j++)
            cout << "    ";
        for (j = n-i-1; j <= n-1; j++)
        {
            cout << matr[i][j] << "  ";
            if (max1 < matr[i][j])
                max1 = matr[i][j];
        }
       /* for (j = 0; j < i; j++)
            cout << "   ";
        for (j = n-i-1; j < n-1; j++)
        {
            cout << matr[i][j] << "  ";
            if (max1 > matr[i][j])
                max1 = matr[i][j];
        }*/
        cout << '\n';
    }

    max2 = matr[0][0];

    for (i = n / 2 ; i < n; i++)
    {
        for (j = 0; j <= n - i - 1; j++)
        {
            cout << matr[i][j] << "  ";
            if (max1 < matr[i][j])
                max1 = matr[i][j];
        }
        for (j = n-i-1; j < i; j++)
            cout << "    ";

        for (j = i; j <= n-1; j++)
        {
            cout << matr[i][j] << "  ";
            if (max2 < matr[i][j])
                max2 = matr[i][j];
        }
        cout << '\n';
    }
    
    cout << "Common max->> " << (max1 >= max2 ? max1 : max2) << '\n';
    
    for (i = 0; i < n; i++)
        if (matr[i])
            delete[] matr[i];
    if (matr)
        delete[] matr;

    return 0;

}
