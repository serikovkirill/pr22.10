#include<iostream>
using namespace std;
void swap1(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}
void qsort(int* mas, int size) {
    int i = 0;
    int j = size - 1;
    int mid = mas[size / 2];
    do {
        while (mas[i] < mid) {
            i++;
        }
        while (mas[j] > mid) {
            j--;
        }
        if (i <= j) {
            swap1(mas[i], mas[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (j > 0) {
        qsort(mas, j + 1);
    }
    if (i < size) {
        qsort(&mas[i], size - i);
    }
}
int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    qsort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}