#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n , m , a[101][101] = {0}, a2[101][101] = {0}, a3[101][101] = {0};
	cin >> n >> m;
	for (int iy = 0; iy < m; iy++) {
		for (int ix = 0; ix < m; ix++) {
			cin >> a[ix][iy];
			a2[ix][iy]=a[ix][iy];
		}
	}

	for (int i = 1; i < n; i++) {
		for (int iy = 0; iy < m; iy++) {
			for (int ix = 0; ix < m; ix++) {
				int l = 0;
				for (int p = 0; p < m; p++) {
					l += a[p][iy] * a2[ix][p];
				}
				a3[ix][iy] = l;
			}
		}
		for (int iy = 0; iy < m; iy++) {
			for (int ix = 0; ix < m; ix++) {
				a2[ix][iy] = a3[ix][iy];
			}
		}
	}

	for (int iy = 0; iy < m; iy++) {
		for (int ix = 0; ix < m; ix++) {
			cout << a2[ix][iy] << " ";
		}
		cout << endl;
	}

	//printf("Hello, world!\n");
	//system("PAUSE");
	return 0;   
}