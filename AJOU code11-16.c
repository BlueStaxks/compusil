#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char b[3][3];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
void init_board() {
	int i, j; for (i = 0; i < 3; i++)
		for (j = 0; j < 3; ++j)
			b[i][j] = ' ';
}
void draw_board() {
	int i;
	for (i = 0; i < 3; i++) {
		printf("|---|---|---|\n");
		printf("| %c | %c | %c |\n", b[i][0], b[i][1], b[i][2]);
	}
	printf("|---|---|---|\n\n");
}
void welcome_message() {
	printf("Welcome to my tic-tac-toe game.\n");
	printf("The coordinates are,\n");
	printf("|---|---|---|\n");
	printf("|0 0|0 1|0 2|\n");
	printf("|---|---|---|\n");
	printf("|1-0|1-1|1-2|\n");
	printf("|---|---|---|\n");
	printf("|2-0|2-1|2-2|\n");
	printf("|---|---|---|\n");
}
int who_first() {
	char ch;
	printf("play first> (Y/N)\n");
	scanf("%c", &ch);
	if (ch == 'Y' || ch == 'y')
		return 1;
	else
		return 0;
}
void human_move() {
	int i, j;
	printf("It's YOUR turn. ");
	printf("Enter coordinates. For instance, 1 0\n");
	r:
	scanf("%d%d", &i, &j);
	if (i < 0 || i>2 || j < 0 || j>2) {
		printf("Invalid coordinate exits the program.\n");
		exit(1);
	}
	if (b[i][j] != ' ')
	{
		printf("거기 이미 뒀다 아이가 참나\n다시 둬라\n");
		goto r;
	}
	b[i][j] = '0';
	printf("You moved as follows.\n");
}
void computer_move() {
	int i, j, l;
	int ddx[8] = { -1,-1,0,1,1,1,0,-1 };
	int ddy[8] = { 0,-1,-1,-1,0,1,1,1 };
	printf("Computer moved as follows.\n");
	if (check('2') == -1)
	{
		srand((unsigned int)time(NULL));
		int r = rand() % 8;
		if (r == 0)	b[0][0] = 'X';
		if (r == 1)	b[0][1] = 'X';
		if (r == 2)	b[0][2] = 'X';
		if (r == 3)	b[1][0] = 'X';
		if (r == 4)	b[1][2] = 'X';
		if (r == 5)	b[2][0] = 'X';
		if (r == 6)	b[2][1] = 'X';
		if (r == 7)	b[2][2] = 'X';
		return;
	}
	if (b[1][1] == ' ')
	{
		b[1][1] = 'X';
		return;
	}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			for (l = 0; l < 8; ++l)
				if (j + 2 * ddx[l] <= 2 && j + 2 * ddx[l] >= 0 && i + 2 * ddy[l] <= 2 && i + 2 * ddy[l] >= 0)
					if (b[j][i] == 'X' && b[j + ddx[l]][i + ddy[l]] == 'X' && b[j + 2 * ddx[l]][i + 2 * ddy[l]] == ' ')
					{
						b[j + 2 * ddx[l]][i + 2 * ddy[l]] = 'X';
						return;
					}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			if (i == 1 && b[1][j]==' ' && b[0][j] == 'X' && b[2][j] == 'X')
			{
				b[1][j] = 'X';
				return;
			}
			if (j == 1 && b[i][1]==' ' && b[i][0] == 'X' && b[i][2] == 'X')
			{
				b[i][1] = 'X';
				return;
			}
		}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			for (l = 0; l < 8; ++l)
				if (j + 2 * ddx[l] <= 2 && j + 2 * ddx[l] >= 0 && i + 2 * ddy[l] <= 2 && i + 2 * ddy[l] >= 0)
					if (b[j][i] == '0' && b[j + ddx[l]][i + ddy[l]] == '0' && b[j + 2 * ddx[l]][i + 2 * ddy[l]] == ' ')
					{
						b[j + 2 * ddx[l]][i + 2 * ddy[l]] = 'X';
						return;
					}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			if (i == 1 && b[1][j] == ' ' && b[0][j] == '0' && b[2][j] == '0')
			{
				b[1][j] = 'X';
				return;
			}
			if (j == 1 && b[i][1] == ' ' && b[i][0] == '0' && b[i][2] == '0')
			{
				b[i][1] = 'X';
				return;
			}
		}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if(b[j][i]==' ')
				for (l = 0; l < 4; ++l)
				{
					if (j + dx[l] > 2 || j + dx[l] < 0 || i + dy[l] > 2 || i + dy[l] < 0)
						continue;
					if (b[j + dx[l]][i + dy[l]] == 'X')
					{
						b[j][i] = 'X';
						return;
					}
				}
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
			if (b[i][j] == ' ') {
				b[i][j] = 'X';
				return;
			}
}
int check(char ch) {
	int i, j, matched = 0, count = 0;
	int k = 0;
	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
			if (b[j][i] != ' ')
				k = 1;
	if (!k)
		return -1;
	
	for (i = 0; i < 3; i++)
		if (b[i][0] == ch && b[i][1] == ch && b[i][2] == ch)
			matched = 1;

	for (j = 0; j < 3; j++)
		if (b[0][j] == ch && b[1][j] == ch && b[2][j] == ch)
			matched = 1;

	if (b[1][1] == ch)
		if ((b[0][0] == ch && b[2][2] == ch) || b[0][2] == ch && b[2][0] == ch)
			matched = 1;
	if (matched) {
		if (ch == 'X')
			return 0;
		else
			return 1;
	}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (b[i][j] == ' ')
				count++;
	if (count == 0)
		return 2;
	return 3;
}
int main() {
	int turn, game_over = 0, state;
	welcome_message();
	init_board();
	turn = who_first();
	while (!game_over) {
		if (turn == 1) {
			human_move();
			state = check('0');
		}
		else {
			computer_move();
			state = check('X');
		}
		draw_board();

		if (state == 0) {
			printf("Computer won.\n\n");
			game_over = 1;
		}
		else if (state == 1) {
			printf("You won.\n\n");
			game_over = 1;
		}
		else if (state == 2) {
			printf("It's a draw.\n\n");
			game_over = 1;
		}
		turn = (turn + 1) % 2;
	}
	return 0;
}