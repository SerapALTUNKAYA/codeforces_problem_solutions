//https://codeforces.com/contest/71/problem/A

#include <stdio.h>
#include <ctype.h>
 
 
int main(void)
{
    int n;
    scanf("%d", &n);
	
    while (n--) {
        char x[101];
	    scanf("%s", &x);
	    
		if (strlen(x) > 10) {
			printf("%c%d%c\n", x[0], strlen(x) - 2, x[strlen(x) - 1]);
		}
		else {
		    printf("%s\n", &x);
		}
	}
	
	return 0;	
}