#include<iostream>
#include<vector>
using namespace std;
int main() {
	int a = 7;
	string b = "a";
	bool c = true;
	short int d = 2;
	float e = 2.5;
	double f = 3.33;
	long double g = 45.2123123;
	int h[3] = { 3,5,7 };
	cout << &a << ' ' << &a - sizeof(a) << endl;
	cout << &b << ' ' << &b - sizeof(b) << endl;//фиксированная разница, равная 10(16).
	cout << &c << ' ' << &c - sizeof(c) << endl;
	cout << &d << ' ' << &d - sizeof(d) << endl;
	cout << &e << ' ' << &e - sizeof(e) << endl;
	cout << &f << ' ' << &f - sizeof(f) << endl;
	cout << &g << ' ' << &g - sizeof(g) << endl;
	cout << &h[0] << ' ' << &h[0] - sizeof(h[0]) << endl;
	cout << &h[1] << ' ' << &h[1] - sizeof(h[1]) << endl;
	cout << &h[2] << ' ' << &h[2] - sizeof(h[2]) << endl;
}
