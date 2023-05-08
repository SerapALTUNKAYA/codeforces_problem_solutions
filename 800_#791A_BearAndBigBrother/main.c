//https://codeforces.com/problemset/problem/791/A

#include <stdio.h>
 
int main(void)
{
	int bear;
	int brother;
 
	scanf("%d%d", &bear, &brother);
 
	int count = 0;
 
	do {
		bear *= 3;
		brother *= 2;
		++count;
	} while (bear <= brother);
	
	printf("%d\n", count);
 
	return 0;
}