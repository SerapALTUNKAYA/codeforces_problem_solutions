//https://codeforces.com/problemset/problem/677/A

#include <stdio.h>
 
int main(void)
{
	int friends, fence;
	scanf("%d%d",&friends, &fence);
	
	int sum = 0;
 
	for (int i = 0; i < friends; ++i) {
		int size;
		scanf("%d", &size);
 
		sum += (size > fence) ? 2 : 1;
	}
 
	printf("%d", sum);
 
	return 0;
}
