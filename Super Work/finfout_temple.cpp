// file.cpp: определяет точку входа для консольного приложения.
 
#include <fstream>
using namespace std;
 
int main(int argc, char* argv[])
{
    ofstream fout("output.txt"); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt
    ifstream fin("input.txt");
    fout.close(); // закрываем файл
    //system("pause");
    return 0;
}