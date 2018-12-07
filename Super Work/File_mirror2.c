#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int comp(const void *p1, const void *p2)
{
	return strcmp(*(char **)p1, *(char **)p2);
}

int main(void)
{
	int i = 0, N, l, count = 0;
	FILE *p = fopen("input.txt", "rt");
	FILE *q = fopen("output.txt", "w");
	if(p != NULL)
	{
		if(q != NULL)
		{
			char buf[1025], **text;
			text = (char **) malloc(1000000 * sizeof(char *));
			while(feof(p) == 0)
			{
				if(fgets(buf, sizeof buf, p) == 0)
					buf[0] = '\0';
				l = strlen(buf);
				if (l > 0 && buf[l - 1] == '\n')
					buf[l - 1] = '\0';
				text[i] = strdup(buf);
				count += 1;
				i++;
			}
			free(text[count - 1]);
			for (i = count - 2; i >= 0; i--)
			{
				fputs(text[i], q);
				fputs("\n", q);
				free(text[i]);
			}
			free(text);
			fclose(q);
		}
		else
			perror("fopen(output.txt)");
		fclose(p);
	}
	else
		perror("fopen(input.txt)");
	return 0;
}
