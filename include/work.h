#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <ncurses.h>
#include <curses.h>
#include <stdlib.h>

void draw(int sx, int sy, int x, int y);
int gotoxy(int x, int y);
//void size(int *x, int *y);
void print_score(int score, int life);
