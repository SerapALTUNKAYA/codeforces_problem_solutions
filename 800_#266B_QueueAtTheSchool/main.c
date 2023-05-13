//https://codeforces.com/problemset/problem/266/B

#include <stdio.h>
#include <string.h>
 
int main() {
    int number, time;
    char queue[51];
    scanf("%d %d %s", &number, &time, queue);
 
    while (time--) {
        for (int i = 0; i < number ; i++) {
            if (queue[i] == 'B' && queue[i + 1] == 'G') {
                queue[i] = 'G';
                queue[i + 1] = 'B';
                i++;
            }
        }
    }
 
    printf("%s\n", queue);
    return 0;
}

