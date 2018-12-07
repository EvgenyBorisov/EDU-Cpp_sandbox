#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int k, i, c[10];
	char s[1025];
	FILE *p = fopen("input.txt", "rt");
	FILE *q = fopen("output.txt", "w");
	fgets(s, 1025 * sizeof(char), p);
	for(i = 0; i < 10; i++)
		c[i] = 0;
	k = strlen(s);
	for(i = 0; i < k; i++)
	{
		c[s[i] - '0'] += 1;
	}
	for(i = 0; i < 10; i++)
		for(k = 0; k < c[i]; k++)
			fprintf(q, "%d", i);
	fclose(q);
	fclose(p);
	return 0;
}

