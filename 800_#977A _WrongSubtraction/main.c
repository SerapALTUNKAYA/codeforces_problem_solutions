//https://codeforces.com/problemset/problem/977/A

#include <stdio.h>

int sub_result(int number, int size)
{
	for (int i = 0; i < size; ++i) {
		if (number % 10 == 0) {
			number /= 10;
		}
		else {
			number -= 1;
		}
	}
	return number;
}

int main(void)
{
	int number;
	int size;

	scanf("%d%d", &number, &size);

	int result = sub_result(number, size);
	
	printf("%d\n", result);

	return 0;
}