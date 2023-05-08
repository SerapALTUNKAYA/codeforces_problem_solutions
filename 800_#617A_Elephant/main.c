//https://codeforces.com/problemset/problem/617/A

#include <stdio.h>
 
int main(void)
{
	int distance;
	scanf("%d", &distance);
 
	int count = 0;
 
	while (distance) {
		if (distance >= 5) {
			distance -= 5;
			count++;
		}
		else if (distance >= 4) {
			distance -= 4;
			count++;
		}
		else if (distance >= 3) {
			distance -= 3;
			count++;
		}
		else if (distance >= 2) {
			distance -= 2;
			count++;
		}
		else {
			distance -= 1;
			count++;
		}
	}
 
	printf("%d\n", count);
 
	return 0;
}