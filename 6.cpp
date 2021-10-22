#include<iostream>
#include<vector>
using namespace std;
int sravn_it(int* a, int* b)
{
	if (&*a == &*b) {
		return 1;
	}
	else return 0;
}
int main() {
	int* a;
	int* b;
	int x, y;
	cin >> x >> y;
	a = &x;
	b = &y;
	cout << sravn_it(a, b) << endl;
}