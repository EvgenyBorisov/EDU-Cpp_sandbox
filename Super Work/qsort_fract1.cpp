#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int x;
	int y;
} Kare;

int cpm(const void *a, const void *b)
{
	Kare *a1 = (Kare*)a;
	Kare *b1 = (Kare*)b;
	if(a1->x * b1->y - b1->x * a1->y == 0)
		return a1->y - b1->y;
	else
		return a1->x * b1->y - b1->x * a1->y;
}

int main(void)
{
	Kare *str;
	int n, i;
	scanf("%d", &n);
	str = (Kare *) malloc(n * sizeof(Kare));
	for(i = 0; i < n; i++)
		scanf("%d/%d", &str[i].x, &str[i].y);
	qsort(str, n, sizeof(Kare), cpm);
	for(i = 0; i < n; i++)
		printf("%d/%d ", str[i].x, str[i].y);
	free(str);
	return 0;
}
