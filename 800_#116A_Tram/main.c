//https://codeforces.com/problemset/problem/116/A

#include <stdio.h>
 
int max_capacity(int n)
{
	int result = 0;
	int max = 0;
 
	for (int i = 0; i < n; ++i) {
		int get_on;
		int get_down;
		scanf("%d%d", &get_on, &get_down);
 
		result += get_down - get_on;
 
		if (result > max) {
			max = result;
		}
	}
 
	return max;
}
 
int main(void)
{
	int n;
	scanf("%d", &n);
 
	printf("%d\n", max_capacity(n));
	
	return 0;
}