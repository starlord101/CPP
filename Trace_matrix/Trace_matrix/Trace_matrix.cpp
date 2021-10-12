// Trace_matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 5;

int main()
{
    //0.
    srand(time(0));
    //1.Объявление
    int i, j,sum=0;
    long matr[N][N]{};

    //2.Заполнение
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matr[i][j] = 10 + rand() % 89;
            cout << matr[i][j] << "  ";
        }
        cout << '\n';
    }
    //3.Выполнение

    for (i = 0; i < N; j++)
        for (j = 0; j < i; j++)
            swap(matr[i][j], matr[j][i]);
    cout << "_________________________\n\n";

    //4.Выдача результатов
    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < N; j++) 
            cout << matr[i][j] << "  ";
        
        cout << '\n';
    }
           
    return 0;
  
}

