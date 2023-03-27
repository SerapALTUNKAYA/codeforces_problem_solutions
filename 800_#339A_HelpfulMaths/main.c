//https://codeforces.com/problemset/problem/339/A

#include <stdio.h>
#include <string.h>
 
int main(void) {
    
    char str[101];
    scanf("%s", str);
 
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int index = 0;

    int len = strlen(str);

    for (int i = 0; i < len; i += 2) {
        if (str[i] == '1') {
            ++count1;
        }
        else if (str[i] == '2') {
            ++count2;
        }
        else if (str[i] == '3') {
            ++count3;
        }
    }
 
    for (int i = 0; i < count1; ++i) {
        str[index] = '1';
        index += 2;
    }
    for (int i = 0; i < count2; ++i) {
        str[index] = '2';
        index += 2;
    }
    for (int i = 0; i < count3; ++i) {
        str[index] = '3';
        index += 2;
    }
 
    printf("%s\n", str);
 
    return 0;
}