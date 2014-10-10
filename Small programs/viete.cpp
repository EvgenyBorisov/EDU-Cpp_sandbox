#include <stdio.h>
#include <iostream>
using namespace std;

int main () {
	int x1, x2, b, c;
	cin >> x1 >> x2;
	b = -(x1 + x2);
	c = x1 * x2;
	cout << "x^2";
	if (b >= 0) {
		cout << "+";
	}
	cout << b << "x";
	if (c >= 0) {
		cout << "+";
	}
	cout << c;

	return 0;
}
