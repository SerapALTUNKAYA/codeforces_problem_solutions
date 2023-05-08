//https://codeforces.com/problemset/problem/236/A

#include <stdio.h>
#include <string.h>
 
int main() {
    char user[101];
    int different_char = 0;
    int count[26] = { 0 };
 
    scanf("%s", user);
    int len = strlen(user);
 
    for (int i = 0; i < len; i++) {
        int index = user[i] - 'a';
        if (count[index] == 0) {
            count[index]++;
            different_char++;
        }
    }
 
    if (different_char % 2 == 0) {
        printf("CHAT WITH HER!\n");
    }
    else {
        printf("IGNORE HIM!\n");
    }
 
    return 0;
}