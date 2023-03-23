//https://codeforces.com/problemset/problem/282/A

#include <stdio.h>
#include <string.h>
 
int main(void) 
{
    int val;
    int x = 0;
    char n[4];
    scanf("%d", &val);
 
    while (val--) {
        scanf("%s", &n);
 
        if ((!strcmp(n, "++x")) || (!strcmp(n, "x++")) || (!strcmp(n, "++X")) || (!strcmp(n, "X++"))) {
            x++;
        }
        if ((!strcmp(n, "--x")) || (!strcmp(n, "x--")) || (!strcmp(n, "--X")) || (!strcmp(n, "X--"))) {
           x--;
        }
    }
 
    printf("%d\n", x);
 
    return 0;
}