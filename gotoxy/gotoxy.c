#include "work.h"

void gotoxy(int x, int y) {
	printf("\033[%d; %df", y, x);
	flushinp();
}
