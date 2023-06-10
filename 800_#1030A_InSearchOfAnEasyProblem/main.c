//https://codeforces.com/problemset/problem/1030/A

#include <stdio.h>
 
int main(void)
{
    int people;
    scanf("%d", &people);
    int answer[100];
 
    for (int i = 0; i < people; ++i) {
        scanf("%d", &answer[i]);
    }
 
    for (int i = 0; i < people; ++i) {
        if (answer[i] == 1) {
            printf("hard\n");
            return 0;
        } 
    }
 
    printf("easy\n");
       
    return 0;
}

