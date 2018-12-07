#include <string.h>
void str(char *s) {
	int l = strlen(s);
	int p = 0;
	for (int i = 0; i < l; i++) {
		if (s[i] == ' ') {
			//p++;
		}
		else {
			s[p]=s[i];
			p++;
		}
	}
	s[p]='\0';
}