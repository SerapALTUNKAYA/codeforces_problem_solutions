//https://codeforces.com/problemset/problem/112/A

#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int compare(char* str1, char* str2) {
    int len = strlen(str1);
    for (int i = 0; i < len; i++) {
        char c1 = tolower(str1[i]);
        char c2 = tolower(str2[i]);
        if (c1 < c2) {
            return -1;
        }
        else if (c1 > c2) {
            return 1;
        }
    }
    return 0;
}
 
int main() {
    char str1[101];
    char str2[101];
    scanf("%s%s", str1, str2);
    
    printf("%d\n", compare(str1, str2));
    return 0;
}