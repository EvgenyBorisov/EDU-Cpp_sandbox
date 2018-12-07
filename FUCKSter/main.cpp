#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {
    string ofile;
    cout << "Welcome to STYLE FUCKER\n                   By Q33\n";
    int a;

    ifstream fin;
    ofstream fout("Fmain.cpp");
    fin.open("text.txt");
    char ch;
    while (fin.get(ch)){
         //fout<<ch;
    	switch (ch){
    		case '#':
    			fout << ch;
    			while (fin.get(ch) != \n){
    				fout << ch;
    			}
    		break;
    	}
    }
fout.close();
cin >> a;

    return 0;

    /*cout <<"Name of output file: ";
    cin >> ofile;
    ofile += ".cpp";
    ofstream fout(ofile);
    fout << "Ня"; // запись строки в файл
    fout.close(); // закрываем файл



    //system("PAUSE");
    return 0;  */

}
