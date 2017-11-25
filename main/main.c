#include "work.h"

int main(void) {//main
	initscr(); //curses mode start
	int start_x = 5;
	int start_y = 2;
	int x = 60, xx = 0;
	int y = 10, yy = 0;
	int tmp = 0;
	int game_count;
	int game_delay = 500;
	int score = 50;
	int life = 3;
	int menu = 0;
	//char username[256];
	//system("mede con:cols=120 lines=30");

	while(menu != 1) {
		do{
			system("clear"); //erase screen
			printf("13011170 minji Jung, 13011164 seongeun Kim\n");
			printf("==========================================\n");
			printf("1.   G  A  M  E           S  T  A  R  T   \n");
			printf("2.   F  I  N  I  S  H        G  A  M  E   \n");
			printf("==========================================\n");
			printf("> ");
			scanf("%d", &menu);
			getchar(); //buffer 

		}
		while(menu < 1 || menu > 2);
		switch(menu) {
			case 2:
				exit(-1);
				break;
		}
	}
	
	system("clear");
	//size(&xx, &yy);
	xx -= 35;
	yy -= 2;
	gotoxy(xx/2, yy/2);
	printf("Guess how many times the star is twinkling.\n");
	gotoxy(xx/2, (yy/2)+1);
	printf("Press any key to start.\n");
	getch();

	while(life > 0)
	{
		//size(&xx, &yy);
		system("clear");
		for(tmp=3; tmp >= 0; tmp --) {
			gotoxy((xx/2)-19, (yy/2)-1);
			printf("start in %d seconds.", tmp);
			sleep(1000);
			system("clear");
		}
		system("clear");
		gotoxy(x/2-5, start_y-1);
		printf("< score : %d  life : %d >", score, life);
		refresh();
		draw(start_x, start_y, x, y);
		gotoxy(start_x, y+4);
		printf("How many times did the star twinkle?(5~25 times)");
		refresh();
		srand((unsigned)time(NULL));
		game_count = (rand()%20)+5;
		for(tmp = 0; tmp < game_count; tmp++) {
			xx = (rand()%(x-2))+start_x+1;
			yy = (rand()%(y-2))+start_y+1;
			gotoxy(xx, yy);
			printf("*");
			sleep(game_delay);
			printf(" ");
		}
		gotoxy(start_x+50, y+4);
		scanf("%d", &tmp);
		if(tmp == game_count) {
			gotoxy(start_x, y+5);
			printf("The answer is correct!");
			refresh();
			score += 50;
			game_delay -= 80;
			//life++;
			sleep(5000);
			print_score(score, life);
		}
		else {
			gotoxy(start_x, y+5);
			printf("That's wrong!\n");
			gotoxy(start_x, y+6);
			printf("The correct answer is %d.", game_count);
			refresh();
			gotoxy(start_x, y+7);
			sleep(5000);
			life--;
			score -= 5;
			print_score(score, life);
		}
	}
	if(life <= 0) {
		//size(&xx, &yy);
		system("clear");
		gotoxy(xx/2-19, yy/2);
		printf("=========================================\n");
		gotoxy(xx/2-19, yy/2+1);
		printf("  G  A  M  E                   O  V  E  R\n", score);
		gotoxy(xx/2-19, yy/2+2);
		printf("=========================================\n");
		sleep(2000);
	}
	endwin(); //curses mode cancel
	return 0;
}
