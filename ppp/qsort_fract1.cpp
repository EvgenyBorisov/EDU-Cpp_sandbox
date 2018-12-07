#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct pint
{
	int x;
	int y;
};

int compare(const void *a, const void *b)
{
	pint *a1 = (pint*)a;
	pint *b1 = (pint*)b;
	if(a1->x * b1->y - b1->x * a1->y == 0)
		return a1->y - b1->y;
	else
		return a1->x * b1->y - b1->x * a1->y;
}

int main(void)
{
	pint *str;
	int n;
	cin >> n;
	str = (pint *) malloc(n * sizeof(pint));
	for(int i = 0; i < n; i++){
		scanf("%d/%d", &str[i].x, &str[i].y);
	}
	qsort(str, n, sizeof(pint), compare);
	for(int i = 0; i < n; i++){
		printf("%d/%d ", str[i].x, str[i].y);
	}
	free(str);
	return 0;
}
