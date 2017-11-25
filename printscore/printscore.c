#include "work.h"

void print_score(int score, int life){
	int xx = 0;
	int yy = 0;
	//size(&xx, &yy);
	xx -= 46;
	yy-= 1;
	system("CLS");
	gotoxy(xx/2, yy/2);
	printf("==============\n");
	gotoxy(xx/2, yy/2+1);
	printf("    score : %5d \n",score);
	gotoxy(xx/2, yy/2+2);
	printf("    life : %5d \n", life);
	gotoxy(xx/2, yy/2+3);
	printf("==============\n");
	sleep(2000);
}

