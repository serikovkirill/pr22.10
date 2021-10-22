#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void matr(int n, int m) {
    srand(time(0));
    int** ptrarray = new int* [n];
    for (int count = 0; count < 2; count++)
        ptrarray[count] = new int[m];
    for (int count_row = 0; count_row < 2; count_row++)
        for (int count_column = 0; count_column < 5; count_column++)
            ptrarray[count_row][count_column] = (rand() % 100 + 1);
    for (int count_row = 0; count_row < 2; count_row++)
    {
        for (int count_column = 0; count_column < 5; count_column++)
            cout << setw(4) << setprecision(2) << ptrarray[count_row][count_column] << "   ";
        cout << endl;
    }
    for (int count = 0; count < 2; count++) {
        delete[]ptrarray[count];
    }
}

int main(int argc, char* argv[])
{
    int n, m;
    cin >> n >> m;
    matr(n, m);
}