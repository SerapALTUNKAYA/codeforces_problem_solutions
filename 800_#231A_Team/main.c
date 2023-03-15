//https://codeforces.com/contest/231/problem/A


#include <stdio.h>
 
int main(void)
{
   int n;
   scanf("%d", &n);
 
   int counter = 0;
	
	while (n--) {
		int num1, num2, num3;
		scanf("%d%d%d", &num1, &num2, &num3);
 
		int sum = num1 + num2 + num3;
 
		if (sum >= 2) {
			counter++;
		}
		
	}
    printf("%d\n", counter);
 
    return 0;
}