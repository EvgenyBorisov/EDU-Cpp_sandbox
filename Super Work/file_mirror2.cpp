#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#define N 1000

using namespace std;

struct  node_single {
	int data;
	struct node_single * next;
};
struct stack {
	struct node_single * top;
};

void push (struct stack *_s, int _x) {
	struct node_single *_new = (struct node_single *) malloc(sizeof(struct node_single));
	_new->data = _x;
	_new->next = _s->top;
	_s->top = _new;
}

int pop (struct stack *_s) {
	if (_s->top == NULL) {
		return 0;
	}
	int ret = _s->top->data;
	struct node_single *temp = _s->top;
	_s->top = _s->top->next;
	free(temp);
	return ret;
}

int main(int argc, char* argv[]) {
	ofstream fout("output.txt"); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt
	ifstream fin("input.txt");
	char str[1024];
	while (fgets(str, 1024, fin) != NULL) {
		fout << str;
	} 
	fout.close(); // закрываем файл
	//system("pause");
	return 0;
}
