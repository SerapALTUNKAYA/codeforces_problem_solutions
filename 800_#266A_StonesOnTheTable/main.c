//https://codeforces.com/contest/266/problem/A

#include <stdio.h>
#include <string.h>
 
int main(void)
{
	int n;
	char str[51];
 
	scanf("%d", &n);
	scanf("%s", str);
 
	int count = 0;
 
	for (int i = 0; i < strlen(str); ++i) {
		if (str[i] == str[i + 1]) {
			count++;
		}
	}
 
	printf("%d", count);
 
	return 0;
}