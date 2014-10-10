#include <stdio.h>
#include <iostream>
using namespace std;

int main () {
	int a, b, c;

	cin >> a >> b >> c;
	//s=a+b+c;
	if ((a < b + c) && (b < a + c) && (c < a + b)) {
		cout << "All right!";
	}
	else {
		if (a > b + c) {
			cout << a << " > " << b << " + " << c << " = " << b+c;
		} else if (b > a + c) {
			cout << b << " > " << a << " + " << c << " = " << a+c;
		} else {
			cout << c << " > " << a << " + " << b << " = " << a+b;
		}


	}
	return 0;
}
