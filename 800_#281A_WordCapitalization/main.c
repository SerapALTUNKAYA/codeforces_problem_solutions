//https://codeforces.com/problemset/problem/281/A

#include <stdio.h>

int main() {

    char str[1001];
    scanf("%s", str);
    
    str[0] = toupper(str[0]);
  
    printf("%s\n",str);
 
    return 0;
    
}