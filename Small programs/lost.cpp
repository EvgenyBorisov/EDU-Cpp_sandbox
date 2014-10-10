#include <stdio.h>
#include <iostream>
using namespace std;

int main () {
	int N, j, e;
	int n[100002] = {0};
	e = 0;
	scanf("%d", &N);
	
	for (int i = 1; i <= N-1; i++) {
		scanf("%d", &j);
		n[j] = 1;
	}
	for (int i = 1; i <= N; i++) {
		//cout << n[i];
		if (n[i] == 0) {
			e = i;
			break;
		}
	}
	printf("%d", e); //cout << e;
	return 0;
}
