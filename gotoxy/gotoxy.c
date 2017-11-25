#include "work.h"

int setsyx(int x, int y)
{
struct Cur;
Cur.X = x;
Cur.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);
return 0;
}
