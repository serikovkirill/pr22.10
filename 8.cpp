#include<iostream>
#include<vector>
#include<typeinfo>
using namespace std;
int* per() {
	int* a = new int;

	cout << "sozdana peremennaya a, ee tip" << ' ' << typeid(a).name() << endl;
	return a;
}
int* ukazatel(int* a)
{
	int* uk = a;
	return uk;
}
int main() {
	cout << ukazatel(per());
}