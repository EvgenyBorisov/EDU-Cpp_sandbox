#include <stdio.h>

unsigned long long C[1024][1024];

int main(void)
{
	unsigned long long i, j, n, k;
	scanf("%llu %llu", &n, &k);
	C[0][0] = 1;
	for (i = 1; i <= n; i++)
	{
		C[i][0] = 1;
		for (j = 1; j <= i; j++)
			C[i][j] = C[i-1][j] + C[i-1][j-1];
	}
	printf("%llu\n", C[n][k]);
	return 0;
}
