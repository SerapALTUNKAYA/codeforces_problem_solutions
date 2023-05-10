//https://codeforces.com/problemset/problem/110/A

#include <stdio.h>
 
int lucky_number(long long number)
{
	int count = 0;
 
	while (number) {
		if (number % 10 == 4 || number % 10 == 7) {
			++count;
		}
		number /= 10;
	}
 
	return count;
}
 
int main(void)
{
	long long number;
	scanf("%lld", &number);
 
	int result = lucky_number(number);
 
	if (result == 4 || result == 7) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
 
	return 0;
}