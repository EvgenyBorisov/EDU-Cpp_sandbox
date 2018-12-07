#include <fstream>
#include <string.h>
using namespace std;

int main(int argc, char* argv[])
{
	ofstream fout("output.txt"); 
	ifstream fin("input.txt");
	int max = 0, l = 0, n = 0;
	char ch;
	while (fin.get(ch)) {
		switch (ch) {
			case ' ': 
			case '	': 
			case '\n': 
			case EOF: 
			case '\0':
				if (l > max) {
					max = l;
				}
				if (l != 0) {
					n += 1;
				}
				l = 0;
				break;

			default:
				l++;
				break;
		}
	}
	if (l > max ) {
		max = l;
	}
	if (l != 0) {
		n += 1;
	}
	l = 0;
	fout << n <<' '<< max;
	fout.close(); 
	fin.close(); 
	//system("pause");
	return 0;
}