//https://codeforces.com/problemset/problem/271/A

#include <stdio.h>
#include <string.h>
 
int is_beautiful_year(int y)
{
	char next_year[5];
	sprintf(next_year, "%d", y);
 
	int len = strlen(next_year);
 
	for (int i = 0; i < len; ++i) {
		for (int j = i + 1; j < len; ++j) {
			if (next_year[i] == next_year[j]) {
				return 0;
				
			}
		}
	}
	
	return 1;
}
 
int main(void)
{
	int year;
	scanf("%d", &year);
 
	int next_year = year + 1;
 
	while (!(is_beautiful_year(next_year))) {
		++next_year;
	}
 
	printf("%d", next_year);
 
	return 0;
}
