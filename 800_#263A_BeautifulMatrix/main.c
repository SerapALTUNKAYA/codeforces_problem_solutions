//https://codeforces.com/problemset/problem/263/A

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(void)
{
    int matris[5][5];
    int row, col; 
    int counter = 0;
 
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matris[i][j]);
            if (matris[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
 
    counter = abs(row - 2) + abs(col - 2);
 
    printf("%d\n", counter);
 
    return 0;
}