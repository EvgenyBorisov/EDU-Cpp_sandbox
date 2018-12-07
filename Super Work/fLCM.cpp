#include <fstream>
using namespace std;

int lcm(int a, int b) {
    return (b < 1 ? (b ? lcm(b, a % b) : a) : (a / -lcm(-b, -a % b) * b));
}

int main(int argc, char* argv[])
{
    ofstream fout("output.txt"); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt
    ifstream fin("input.txt");
    int a, b;
    fin >> a >> b ;
    fout << lcm(a, b);
    fout.close(); // закрываем файл
    //system("pause");
    return 0;
}
