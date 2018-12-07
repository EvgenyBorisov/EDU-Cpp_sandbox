#include <string.h>
#include <stdio.h>

void strdel(char *s, unsigned int idx, unsigned int count)
{
	unsigned int i, j, k;
	if(s != NULL)
	{
		i = strlen(s);
		if(i != 0 && idx <= i)
		{
			if(i - idx < count)
				j = i - idx;
			else
				j = count;
			for(k = 0; k < i - idx - j; k++)
				s[k + idx] = s[k + idx + j];
			s[i - j] = '\0';
		}
	}
}
