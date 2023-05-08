//https://codeforces.com/contest/546/problem/A

#include <stdio.h>
 
int main(void)
{
	int price;
	int cash;
	int piece;
 
	scanf("%d%d%d", &price, &cash, &piece);
 
	int sum = 0;
 
	for (int i = 0; i <= piece; ++i) {
		int multply = i * price;	
		sum += multply;
	}
	
	if (cash < sum) {
		int result = sum - cash;
		printf("%d", result);
	}
	else {
		putchar('0');
	}
 
	return 0;
}