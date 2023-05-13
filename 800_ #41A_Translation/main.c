//https://codeforces.com/problemset/problem/41/A

include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void translation(char* berland)
{
	int temp;
	unsigned int len = strlen(berland);
 
	for (int i = 0; i < len / 2; ++i) {
		temp = berland[i];
		berland[i] = berland[len - 1 - i];
		berland[len - 1 - i] = temp;
	}
}
 
int main(void)
{
	char berland[1001];
	gets(berland);
 
	char birland[1001];
	gets(birland);
 
	translation(berland);
 
	if (!strcmp(berland, birland)) {
		printf("YES\n");
	}
	else {
		printf("NO");
	}
 
	return 0;
}
