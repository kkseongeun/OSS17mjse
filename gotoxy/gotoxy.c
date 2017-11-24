#include "work.h"

int gotoxy(int x, int y)
{
COORD Cur;
Cur.X = x;
Cur.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);
}
