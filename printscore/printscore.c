#include "work.h"

void print_score(int score, int life){
int xx, yy;
size(&xx, &yy);
xx -= 46;
yy-= 1;
system("CLS");
setsyx(xx/2, yy/2);
printf("==============\n");
setsyx(xx/2, yy/2+1);
printf("    score : %5d \n",score);
setsyx(xx/2, yy/2+2);
printf("    life : %5d \n", life);
setsyx(xx/2, yy/2+3);
printf("==============\n");
Sleep(2000);
}

