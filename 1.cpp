#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int* i = a; i < a + n; ++i)
	{
		cin >> *i;
	}
}