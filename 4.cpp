#include <iostream>
using namespace std;
int main() {
	int n; //фиксированная разница, равная 16(10).
	cin >> n;
	string* a = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		cout << &(a[i]) << endl;
	}
}
