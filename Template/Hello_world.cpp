#include <stdio.h>
#include <iostream>
#include <string>
void str( char *s ) {
	int l = strlen(s);
	int p = 0;
	for (int i = 0; i < l; i++) {
		if (s[i] == ' ') {
			p++;
		}
		else {
			s[p] = s[i];
			p++;
		}
	}
}
using namespace std;

int main() {
    cout << str("ads sad");
    //system("PAUSE");
    return 0;   
}
