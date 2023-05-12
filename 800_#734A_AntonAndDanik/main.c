//https://codeforces.com/problemset/problem/734/A

#include <stdio.h>
 
char winner(char* win, int game)
{
	int count_a = 0;
	int count_d = 0;
 
	for (int i = 0; win[i] != '\0'; ++i) {
		if (win[i] == 'A') {
			++count_a;
		}
		else {
			++count_d;
		}
	}
 
	if (count_a > count_d) {
		return 'A';
	}
	else if (count_a < count_d) {
		return 'D';
	}
	else {
		return 'F';
	}
 
}
 
int main(void)
{
	int game;
	char win[100001];
 
	scanf("%d%s", &game, win);
 
	char result =  winner(win, game);
 
	if (result == 'A') {
		printf("Anton\n");
	}
	else if (result == 'D') {
		printf("Danik\n");
	}
	else {
		printf("Friendship");
	}
	
	return 0;
}
