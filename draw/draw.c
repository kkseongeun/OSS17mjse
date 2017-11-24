#include "work.h"
#include<stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <string.h>

void draw(int sx, int sy, int x, int y){
int tmp;
gotoxy(sx, sy);

for(tmp=0; tmp<x; tmp++){
printf("=");
}

for(tmp=0; tmp<y; tmp++){
gotoxy(sx-1, (sy+1)+tmp);
printf("|\n");
}

for(tmp=0; tmp<y; tmp++){
gotoxy(sx+x,(sy+1)+tmp);
printf("|\n");
}

gotoxy(sx, (sy+1)+y);
for(tmp=0; tmp<x; tmp++){
printf("=");
}
}
