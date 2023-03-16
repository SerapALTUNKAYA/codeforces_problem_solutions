//https://codeforces.com/contest/158/problem/A

#include <stdio.h>
 
int main(void)
{
    int a[100];
    int n;
    int k;
    scanf("%d%d", &n, &k);
 
    int num_counter = 0;
 
    for (int i = 0; i < n; ++i) {
        scanf("%d", &i[a]);
    }
    
    for (int i = 0; i < n; ++i) {
        if (a[i] >= a[k - 1] && a[i] > 0) {
            num_counter++;
        }
 
    }
    printf("%d\n", num_counter);
 
    return 0;
 
}