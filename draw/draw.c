#include "work.h"

void draw(int sx, int sy, int x, int y){
int tmp;
gotoxy(sx, sy);

for(tmp=0; tmp<x; tmp++){
printf("=");
}

for(tmp=0; tmp<y; tmp++){
setsyx(sx-1, (sy+1)+tmp);
printf("|\n");
}

for(tmp=0; tmp<y; tmp++){
setsyx(sx+x,(sy+1)+tmp);
printf("|\n");
}

setsyx(sx, (sy+1)+y);
for(tmp=0; tmp<x; tmp++){
printf("=");
}
}
