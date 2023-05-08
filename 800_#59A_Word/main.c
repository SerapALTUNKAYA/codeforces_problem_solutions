//https://codeforces.com/problemset/problem/59/A

#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int main(void)
{
	char str[101];
	scanf("%s", str);
	int count = 0;
	int size = strlen(str);
 
	for (int i = 0; str[i] != '\0'; ++i) {
		if (isupper(str[i])) {
			++count;
		}
	}
 
	int result = size - count;
 
	for (int i = 0; str[i] != '\0'; ++i) {
		if (count > result) {
			printf("%c", toupper(str[i]));
		}
		else {
			printf("%c", tolower(str[i]));
		}
	}
	return 0;
}