#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char text[100], cp[100];
	const int diff = 'a' - 'A';
	printf("input> ");
	fgets(text, sizeof(text), stdin);
	strncpy(cp, text, sizeof(text));
	cp[sizeof(cp) - 1] = 0;
	printf("output> ");
	for (int i = 0; i < 100; i++) {
		if (cp[i] >= 'A' && cp[i] <= 'Z')
			printf("%c", cp[i] + diff);
		else if (cp[i] <= 'z' && cp[i] >= 'a')
			printf("%c", cp[i] - diff);
		else
			printf("%c", cp[i]);
	}
	return 0;
}