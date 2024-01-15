#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>

#define GRID_SIZE 25
#define PLAYER_CHAR 'C'
#define OBJECT_CHAR 'O'
#define END_CHAR 'E'
#define NUM_OBJECTS 150
#define TIME_LIMIT 40
#define ROWS 28
#define COLS 25

COORD coord = {0, 0};

void gotoxy(int x, int y) // function to set the cursor position
{
    coord.X = (SHORT)x;
    coord.Y = (SHORT)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int c=0,test=0,test1=0,test2=0,riddl=1;
int maker=0;
char creator[3][9]={"MESUM.R","MUSFIRAH","AIMAN K."};

int preintro(){
    Sleep(800);gotoxy(29+15,12);printf("THIS");Sleep(800);printf(" GAME");Sleep(800);printf(" IS");Sleep(800);printf(" BROUGHT");Sleep(800);printf(" T0");Sleep(800);printf(" YOU");Sleep(800);printf(" BY");
    Sleep(2000);gotoxy(29+19,14);printf("4 0 4-N O T-F O U N D");
    Sleep(4200);gotoxy(29+26,16);printf("C");gotoxy(29+16,16);printf("C");gotoxy(29+36,16);printf("C");
    Sleep(200);gotoxy(29+27,16);printf("T");gotoxy(29+17,16);printf("T");gotoxy(29+37,16);printf("T");
    Sleep(200);gotoxy(29+28,16);printf("C");gotoxy(29+18,16);printf("C");gotoxy(29+38,16);printf("C");
    Sleep(200);gotoxy(29+29,16);printf("Y");gotoxy(29+19,16);printf("Y");gotoxy(29+39,16);printf("Y");
    Sleep(200);gotoxy(29+30,16);printf("-");gotoxy(29+20,16);printf("-");gotoxy(29+40,16);printf("-");
    Sleep(200);gotoxy(29+31,16);printf("0");gotoxy(29+21,16);printf("0");gotoxy(29+41,16);printf("0");
    Sleep(200);gotoxy(29+32,16);printf("0");gotoxy(29+22,16);printf("3");gotoxy(29+42,16);printf("0");
    Sleep(200);gotoxy(29+33,16);printf("3");gotoxy(29+23,16);printf("2");gotoxy(29+43,16);printf("5");
    gotoxy(29+16,17);printf("MESUM.R");gotoxy(29+36,17);printf("MUSFIRAH");gotoxy(29+26,17);printf("AIMAN K.");
    return 0;
}

int intro(){
    Sleep(150);gotoxy(29+26,14);printf("A");gotoxy(29+1,5);printf("ARCANA ");gotoxy(29+1,8);printf("ARCANA ");gotoxy(29+1,11);printf("ARCANA ");gotoxy(29+1,17);printf("ARCANA ");gotoxy(29+1,20);printf("ARCANA ");gotoxy(29+1,23);printf("ARCANA ");
    Sleep(150);gotoxy(29+27,14);printf("R");gotoxy(29+12,5);printf("ARCANA ");gotoxy(29+12,8);printf("ARCANA ");gotoxy(29+12,11);printf("ARCANA ");gotoxy(29+12,17);printf("ARCANA ");gotoxy(29+12,20);printf("ARCANA ");gotoxy(29+12,23);printf("ARCANA ");
    Sleep(150);gotoxy(29+28,14);printf("C");gotoxy(29+22,5);printf("ARCANA ");gotoxy(29+22,8);printf("ARCANA ");gotoxy(29+22,11);printf("ARCANA ");gotoxy(29+22,17);printf("ARCANA ");gotoxy(29+22,20);printf("ARCANA ");gotoxy(29+22,23);printf("ARCANA ");
    Sleep(150);gotoxy(29+29,14);printf("A");gotoxy(29+32,5);printf("ARCANA ");gotoxy(29+32,8);printf("ARCANA ");gotoxy(29+32,11);printf("ARCANA ");gotoxy(29+32,17);printf("ARCANA ");gotoxy(29+32,20);printf("ARCANA ");gotoxy(29+32,23);printf("ARCANA ");
    Sleep(150);gotoxy(29+30,14);printf("N");gotoxy(29+42,5);printf("ARCANA ");gotoxy(29+42,8);printf("ARCANA ");gotoxy(29+42,11);printf("ARCANA ");gotoxy(29+42,17);printf("ARCANA ");gotoxy(29+42,20);printf("ARCANA ");gotoxy(29+42,23);printf("ARCANA ");
    Sleep(150);gotoxy(29+31,14);printf("A");gotoxy(29+52,5);printf("ARCANA ");gotoxy(29+52,8);printf("ARCANA ");gotoxy(29+52,11);printf("ARCANA ");gotoxy(29+52,17);printf("ARCANA ");gotoxy(29+52,20);printf("ARCANA ");gotoxy(29+52,23);printf("ARCANA ");
    Sleep(150);gotoxy(29+32,14);printf(" ");gotoxy(29+1,5);printf("       ");gotoxy(29+12,5);printf("       ");gotoxy(29+22,5);printf("       ");gotoxy(29+32,5);printf("       ");gotoxy(29+42,5);printf("       ");gotoxy(29+52,5);printf("       ");
                                            gotoxy(29+1,8);printf("       ");gotoxy(29+12,8);printf("       ");gotoxy(29+22,8);printf("       ");gotoxy(29+32,8);printf("       ");gotoxy(29+42,8);printf("       ");gotoxy(29+52,8);printf("       ");
                                            gotoxy(29+1,11);printf("       ");gotoxy(29+12,11);printf("       ");gotoxy(29+22,11);printf("       ");gotoxy(29+32,11);printf("       ");gotoxy(29+42,11);printf("       ");gotoxy(29+52,11);printf("       ");
                                            gotoxy(29+1,23);printf("       ");gotoxy(29+12,23);printf("       ");gotoxy(29+22,23);printf("       ");gotoxy(29+32,23);printf("       ");gotoxy(29+42,23);printf("       ");gotoxy(29+52,23);printf("       ");                            
                                            gotoxy(29+1,20);printf("       ");gotoxy(29+12,20);printf("       ");gotoxy(29+22,20);printf("       ");gotoxy(29+32,20);printf("       ");gotoxy(29+42,20);printf("       ");gotoxy(29+52,20);printf("       ");
                                            gotoxy(29+1,17);printf("       ");gotoxy(29+12,17);printf("       ");gotoxy(29+22,17);printf("       ");gotoxy(29+32,17);printf("       ");gotoxy(29+42,17);printf("       ");gotoxy(29+52,17);printf("       ");                               
}

void introname(){
    Sleep(150);gotoxy(29+26,14);printf("%c",creator[maker][0]);gotoxy(29+1,5);printf("%s",creator[maker]);gotoxy(29+1,8);printf("%s",creator[maker]);gotoxy(29+1,11);printf("%s",creator[maker]);gotoxy(29+1,17);printf("%s",creator[maker]);gotoxy(29+1,20);printf("%s",creator[maker]);gotoxy(29+1,23);printf("%s",creator[maker]);
    Sleep(150);gotoxy(29+27,14);printf("%c",creator[maker][1]);gotoxy(29+12,5);printf("%s",creator[maker]);gotoxy(29+12,8);printf("%s",creator[maker]);gotoxy(29+12,11);printf("%s",creator[maker]);gotoxy(29+12,17);printf("%s",creator[maker]);gotoxy(29+12,20);printf("%s",creator[maker]);gotoxy(29+12,23);printf("%s",creator[maker]);
    Sleep(150);gotoxy(29+28,14);printf("%c",creator[maker][2]);gotoxy(29+22,5);printf("%s",creator[maker]);gotoxy(29+22,8);printf("%s",creator[maker]);gotoxy(29+22,11);printf("%s",creator[maker]);gotoxy(29+22,17);printf("%s",creator[maker]);gotoxy(29+22,20);printf("%s",creator[maker]);gotoxy(29+22,23);printf("%s",creator[maker]);
    Sleep(150);gotoxy(29+29,14);printf("%c",creator[maker][3]);gotoxy(29+32,5);printf("%s",creator[maker]);gotoxy(29+32,8);printf("%s",creator[maker]);gotoxy(29+32,11);printf("%s",creator[maker]);gotoxy(29+32,17);printf("%s",creator[maker]);gotoxy(29+32,20);printf("%s",creator[maker]);gotoxy(29+32,23);printf("%s",creator[maker]);
    Sleep(150);gotoxy(29+30,14);printf("%c",creator[maker][4]);gotoxy(29+42,5);printf("%s",creator[maker]);gotoxy(29+42,8);printf("%s",creator[maker]);gotoxy(29+42,11);printf("%s",creator[maker]);gotoxy(29+42,17);printf("%s",creator[maker]);gotoxy(29+42,20);printf("%s",creator[maker]);gotoxy(29+42,23);printf("%s",creator[maker]);
    Sleep(150);gotoxy(29+31,14);printf("%c",creator[maker][5]);gotoxy(29+52,5);printf("%s",creator[maker]);gotoxy(29+52,8);printf("%s",creator[maker]);gotoxy(29+52,11);printf("%s",creator[maker]);gotoxy(29+52,17);printf("%s",creator[maker]);gotoxy(29+52,20);printf("%s",creator[maker]);gotoxy(29+52,23);printf("%s",creator[maker]);
    Sleep(150);gotoxy(29+32,14);printf("%c",creator[maker][6]);gotoxy(29+1,5);printf("        ");gotoxy(29+12,5);printf("        ");gotoxy(29+22,5);printf("        ");gotoxy(29+32,5);printf("        ");gotoxy(29+42,5);printf("        ");gotoxy(29+52,5);printf("        ");
                                            gotoxy(29+1,8);printf("        ");gotoxy(29+12,8);printf("        ");gotoxy(29+22,8);printf("        ");gotoxy(29+32,8);printf("        ");gotoxy(29+42,8);printf("        ");gotoxy(29+52,8);printf("        ");
                                            gotoxy(29+1,11);printf("        ");gotoxy(29+12,11);printf("        ");gotoxy(29+22,11);printf("        ");gotoxy(29+32,11);printf("        ");gotoxy(29+42,11);printf("        ");gotoxy(29+52,11);printf("        ");
                                            gotoxy(29+1,23);printf("        ");gotoxy(29+12,23);printf("        ");gotoxy(29+22,23);printf("        ");gotoxy(29+32,23);printf("        ");gotoxy(29+42,23);printf("        ");gotoxy(29+52,23);printf("        ");                            
                                            gotoxy(29+1,20);printf("        ");gotoxy(29+12,20);printf("        ");gotoxy(29+22,20);printf("        ");gotoxy(29+32,20);printf("        ");gotoxy(29+42,20);printf("        ");gotoxy(29+52,20);printf("        ");
                                            gotoxy(29+1,17);printf("        ");gotoxy(29+12,17);printf("        ");gotoxy(29+22,17);printf("        ");gotoxy(29+32,17);printf("        ");gotoxy(29+42,17);printf("        ");gotoxy(29+52,17);printf("        ");                               
	maker++;
}

void introduction(){
	
	system("cls");
	PlaySoundA(TEXT("C:\\Users\\kk\\Desktop\\project\\intros.wav"), NULL, SND_FILENAME | SND_ASYNC);
	
	int n;
	printf("\n\n\n\t\tOh... Hello there ...\n\t\tYou must be the junior wizard. \n\t\tLet me introduce myself. (ahem)...\n\t\tI'm the High Wizard of Kingdom of Magika. \n\n");
	printf("\t\t(1. Honoured to meet you / 2. Damn you're old, no offense) (1/2):");
	scanf("%d",&n);
	if(n==2)
		printf("\t\tHaha ...No need to rub it in my face, young man ...");
	else
		printf("\t\tLikewise likewise...");
	 
	printf("\n\t\tLook, it was nice meeting you but I must inform you of the reason you were summoned here ...\n");
	getch();
	printf("\t\tA shadow has fallen upon magika. The pedulem of future swings between light and darkness\n");
	getch();
	
	printf("\n\t\tNow listen carefully...\n\n\t\tOur kingdom is balanced between 5 magic stones. They are the very essence of our kingdom\n\t\tbut recently they have started fading at an alarming rate!\n");
	getch();
	printf("\t\tMagika is in peril!We must act swiftly to restore them or the kingdom will perish!!\n\n\t\t(1. How can we restore them? / 2. Will I die!? i don't wanna dieee) (1/2): ");
 	scanf("%d",&n);
	printf("\t\tFear not. There exists a realm beyond our own named arcana. We must take a leap of faith and travel to that realm. There we will be\n\t\table to find new magic stones to restore.\n\n\t\t(1. Don't tell me its ME that's has to go / 2. I suppose youre telling me because its me that has to go) (1/2): ");
	scanf("%d",&n);
	printf("\t\tYou were summoned because youre worthy. Will you accept this quest and save our kingdom?\n\t\t(1.I shall take this risk and save the kigdom / 2. You're not giving me a choice, old man) (1/2):");
	scanf("%d",&n);
	printf("\n\t\tI shall teleport you to Arcana now. Go! During this time of darkness, you are our only hope! Your kingdom relies on you.\n\t\t(1. I'll do my best! / 2. Ugh what am I supposed to dooo?)");
	scanf("%d",&n);
	
	printf("\t\tPRESS ANY KEY TO CONTINUE...");
	getch();
}

void instruction(){
	system("cls");
	PlaySoundA(TEXT("C:\\Users\\kk\\Desktop\\project\\intros.wav"), NULL, SND_FILENAME | SND_ASYNC);
	
	printf("\n\n\n\t\t\t\t\t        Instructions\n\n\n\n\n");
	printf("\t\t1. There will be 3 levels, representing different locations of Arcana.\n\n\t\t2. Every level has a different criteria.\n\n\t\t3. You must complete all levels to successfully restore the magic stones.\n\n\t\t4. You have to complete any current level to able to move onto the next.\n\n");
	printf("\t\t5. Movement:\n\n\t\tW --- UP\n\t\tS --- DOWN\n\t\tA --- LEFT\n\t\tD --- RIGHT\n\n\n");
	printf("\t\t\t\tGood luck! May the odds ever be in your favour\n\n\n");
	printf("\t\tPRESS ANY KEY TO CONTINUE...");
	getch();	
}

void game1intro(){
	system("cls");
	PlaySoundA(TEXT("C:\\Users\\kk\\Desktop\\project\\intros.wav"), NULL, SND_FILENAME | SND_ASYNC);
	
	printf("\n\n\n\t\t\t\t\t        LEVEL 1 - DEATHCAP MINEFIELD\n\n\n\n\n");
	printf("\t\tYou have encountered a field full of Deathcap Mushrooms growing from the ground.\n\t\tDeathcap is an extremely poisonous mushroom. Simply touching one can most\n\t\tdefinitely kill you. You have no other choice than to cross the field to be\n\t\table to continue your quest. Your kingdom is counting on you.\n\n\n");
	printf("\t\tNavigate carefully through the field without touching any mushrooms to reach the end point.\n\t\tIf you accidentally touch one, YOU DIE.\n\n\n");
	printf("\t\tS --- Represents START\n\t\tE --- Represents END\n\t\tO --- Represent Deathcap Mushrooms\n\n\n\n");
	printf("\t\t\t\t\tGood luck! May the odds ever be in your favour\n\n\n\n");
	printf("\t\tPRESS ANY KEY TO CONTINUE...");
	getch();
	
}

int playerX, playerY;
int objectX[NUM_OBJECTS], objectY[NUM_OBJECTS];
int endX, endY;

void initializeGame() {
	int i;
    playerX = 0;
    playerY = 0;

    endX = GRID_SIZE - 1;
    endY = GRID_SIZE - 1;

    srand(time(NULL));

    for (i = 0; i < NUM_OBJECTS; i++) {
        objectX[i] = rand() % GRID_SIZE;
        objectY[i] = rand() % GRID_SIZE;
    }
}

void printGrid() {
	int i,j,k;
    system("cls");
    printf("+-------------------------+\n");

    for (i = 0; i < GRID_SIZE; i++) {
        printf("| ");
        for (j = 0; j < GRID_SIZE; j++) {
            if (i == playerY && j == playerX) {
                printf("%c ", PLAYER_CHAR);
            } else if (i == endY && j == endX) {
                printf("%c <--end here", END_CHAR);
            } else {
                int isObject = 0;
                for (k = 0; k < NUM_OBJECTS; k++) {
                    if (i == objectY[k] && j == objectX[k]) {
                        isObject = 1;
                        break;
                    }
                }
                if (isObject) {
                    printf("%c ", OBJECT_CHAR);
                } else {
                    printf("  ");
                }
            }
        }
        printf("|\n");
    }
    printf("+-------------------------+\n");
}

int checkGameOver() {
	int i;
    for (i = 0; i < NUM_OBJECTS; i++) {
        if (playerX == objectX[i] && playerY == objectY[i]) {
            printf("\nGame Over. You touched an object!\n");
            return 1;
        }
    }

    if (playerX == endX && playerY == endY) {
        printf("\nCongratulations! You reached the ending point.\n");
        test1 = 1;
        return 1;
    }

    return 0;
}

void replayOrExit() {
    char replay;

    while (1) {
        printf("\nDo you want to replay? (y/n): ");
        replay = getch();

        if (replay == 'y' || replay == 'Y') {
            initializeGame();
            time_t startTime = time(NULL);
            int gameOver = 0;

            while (!gameOver) {
            printGrid();

            time_t currentTime = time(NULL);
            if ((currentTime - startTime) >= TIME_LIMIT) {
                printf("\nGame Over. Time limit exceeded!\n");
                replayOrExit();
            }

            char move = getch();

            switch (move) {
                case 'q':
                    printf("\nGame Over. You quit the game.\n");
                    replayOrExit();
                case 'w':
                    if (playerY > 0) playerY--;
                    break;
                case 'a':
                    if (playerX > 0) playerX--;
                    break;
                case 's':
                    if (playerY < GRID_SIZE - 1) playerY++;
                    break;
                case 'd':
                    if (playerX < GRID_SIZE - 1) playerX++;
                    break;
            }

            gameOver = checkGameOver();
        }

            replayOrExit();
        } else if (replay == 'n' || replay == 'N') {
            printf("\nExiting the game. Goodbye!\n");
            break;
        } else {
            printf("\nInvalid input. Please enter 'y' or 'n'.\n");
        }
    }
}

void game1(){
	char move;
    int gameOver = 0;
    time_t startTime, currentTime;

    initializeGame();
    startTime = time(NULL);

    while (!gameOver) {
        printGrid();

        currentTime = time(NULL);
        if ((currentTime - startTime) >= TIME_LIMIT) {
            printf("\nGame Over. Time limit exceeded!\n");
            replayOrExit();
        }

        move = getch();

        switch (move) {
            case 'q':
                printf("\nGame Over. You quit the game.\n");
                replayOrExit();
            case 'w':
                if (playerY > 0) playerY--;
                break;
            case 'a':
                if (playerX > 0) playerX--;
                break;
            case 's':
                if (playerY < GRID_SIZE - 1) playerY++;
                break;
            case 'd':
                if (playerX < GRID_SIZE - 1) playerX++;
                break;
        }

        gameOver = checkGameOver();
    }

    replayOrExit();
}

void game2intro(){
	system("cls");
	PlaySoundA(TEXT("C:\\Users\\kk\\Desktop\\project\\intros.wav"), NULL, SND_FILENAME | SND_ASYNC);
	
	printf("\n\n\n\t\t\t\t\t        LEVEL 2 - LOST LABYRINTH\n\n\n\n\n");
	printf("\t\tCongratulations on successfully crossing deathcap field. But danger doesn't end here.\n\t\tYou have now reached the labyrinths. One of the most challenging locations of Arcana.\n\t\tIf you stay too long, it will mess up your brain and you'll be stuck here forever!\n\n\n");
	printf("\t\tNavigate through the maze till you reach the endpoint. You have 180 secs to\n\t\tsuccessfully cross the maze. Otherwise, YOU DIE.\n\n\n");
	printf("\t\t# --- Represents Walls of the Maze\n\t\tE --- Represents END\n\t\tC --- Represents your CHARACTER\n\n\n\n");
	printf("\t\t\t\t\tGood luck! May the odds ever be in your favour\n\n\n\n");
	printf("\t\tPRESS ANY KEY TO CONTINUE...");
	getch();
	
}

void printing(char a[32][30]){
	int i,j;
   
	for (i = 0; i < 32; i++) {
        for (j = 0; j < 30; j++) {
            printf("%c  ", a[i][j]);
        }
        printf("\n");
    }
}

void game2(){
	system("cls");
	int i = 1, j = 1, l = 1;
    char t;
    time_t start_time, current_time;
    time(&start_time);
    char a[32][30]={
{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
{'#','C','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
{'#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#'},
{'#','#','#',' ','#','#','#',' ','#',' ','#',' ','#',' ','#','#','#','#','#','#','#','#','#','#','#',' ','#','#','#','#'},
{'#',' ','#',' ',' ',' ','#',' ','#',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ','#',' ','#',' ',' ','#'},
{'#',' ','#','#','#',' ','#','#','#',' ','#',' ','#','#','#',' ','#','#','#',' ','#',' ','#',' ','#',' ','#',' ','#','#'},
{'#',' ',' ',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#',' ','#',' ','#'},
{'#',' ','#','#','#',' ','#',' ','#','#','#','#','#',' ','#',' ','#',' ','#',' ','#','#','#','#','#',' ','#','#','#','#'},
{'#',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ','#',' ',' ',' ','#',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#'},
{'#',' ','#',' ','#','#','#','#','#',' ','#',' ','#',' ','#','#','#',' ','#','#','#',' ','#',' ','#','#','#','#','#','#'},
{'#',' ','#',' ','#',' ',' ',' ','#',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#','#'},
{'#',' ','#',' ','#',' ','#',' ','#',' ','#',' ','#',' ','#','#','#','#','#','#','#','#','#',' ','#',' ','#',' ','#','#'},
{'#',' ','#',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#',' ',' ',' ','#','#'},
{'#',' ','#',' ','#',' ','#','#','#',' ','#','#','#','#','#','#','#','#','#',' ','#',' ','#',' ','#','#','#',' ','#','#'},
{'#',' ',' ',' ','#',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#','#'},
{'#',' ','#','#','#',' ','#',' ','#','#','#',' ','#','#','#',' ','#','#','#','#','#','#','#',' ','#',' ','#',' ','#','#'},
{'#',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ','#',' ','#',' ','#','#'},
{'#',' ','#','#','#','#','#','#','#',' ','#',' ','#',' ','#','#','#',' ','#','#','#',' ','#','#','#',' ','#',' ','#','#'},
{'#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ','#',' ','#',' ','#','#'},
{'#','#','#','#','#','#','#',' ','#','#','#',' ','#','#','#','#','#','#','#',' ','#','#','#',' ','#',' ','#',' ','#','#'},
{'#',' ',' ',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#',' ','#',' ','#','#'},
{'#',' ','#',' ','#',' ','#','#','#',' ','#','#','#','#','#','#','#','#','#',' ','#',' ','#',' ','#',' ','#','#','#','#'},
{'#',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ','#',' ','#',' ',' ',' ','#','#'},
{'#',' ','#','#','#',' ','#','#','#','#','#','#','#',' ','#',' ','#','#','#','#','#',' ','#',' ','#','#','#',' ','#','#'},
{'#',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ','#',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#','#'},
{'#',' ','#','#','#',' ','#',' ','#',' ','#','#','#',' ','#',' ','#','#','#',' ','#',' ','#','#','#',' ','#',' ','#','#'},
{'#',' ',' ',' ','#',' ','#',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#',' ','#','#'},
{'#',' ','#',' ','#',' ','#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','#',' ','#',' ','#','#'},
{'#',' ','#',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#',' ','#',' ','#','#'},
{'#',' ','#',' ','#','#','#','#','#',' ','#',' ','#','#','#','#','#',' ','#',' ','#',' ','#','#','#',' ','#',' ','#','#'},
{'#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ','E','#'},
{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}
    };

    char m,input;   
    
	printing(a);
	
    while (l) {
    	time(&current_time);
        int elapsed_time = difftime(current_time, start_time);
        
		m = getch();
		
        switch (m) {
        case 'w':
            if (a[i - 1][j] != '#') {
                t = a[i][j];
                a[i][j] = a[i - 1][j];
                a[i - 1][j] = t;
                i--;

                if (a[i][j] == 'E') {
                    l = 0;
                }
            }
            break;
        case 's':
            if (a[i + 1][j] != '#') {
                t = a[i][j];
                a[i][j] = a[i + 1][j];
                a[i + 1][j] = t;
                i++;

                if (a[i][j] == 'E') {
                    l = 0;
                }
            }
            break;
        case 'a':
            if (a[i][j - 1] != '#') {
                t = a[i][j];
                a[i][j] = a[i][j - 1];
                a[i][j - 1] = t;
                j--;

                if (a[i][j] == 'E') {
                    l = 0;
                }
            }
            break;
        case 'd':
            if (a[i][j + 1] != '#') {
                t = a[i][j];
                a[i][j] = a[i][j + 1];
                a[i][j + 1] = t;
                j++;

                if (a[i][j] == 'E') {
                    l = 0;
                }
            }
            break;
        }
        if(elapsed_time>=70){
            break;
        }
        if(i==30 && j==28){
        	printf("\n\n\tCongratulations!! You successfully cleared this level\n\n");
        	printf("\t\tPRESS ANY KEY TO CONTINUE");
        	getch();
        	test = 1;
            break;
        }
        if (l == 1) {
        	system("cls");
            printing(a);
        }      
    }   
}

void outro(){
	system("cls");
	PlaySoundA(TEXT("C:\\Users\\kk\\Desktop\\project\\fightbackfinal.wav"), NULL, SND_FILENAME | SND_ASYNC);
	printf("\n\n\n\t\t\t\t\t        YOU WON\n\n\n");
	printf("\t\t\t\t       YOU RESTORED ALL THE STONES\n\t\t\t\t\t   OUR KINGDOM IS SAVED!");
	getch();
}

void game3intro(){
	system("cls");
	PlaySoundA(TEXT("C:\\Users\\kk\\Desktop\\project\\intros.wav"), NULL, SND_FILENAME | SND_ASYNC);
	
	printf("\n\n\n\t\t\t\t\t        LEVEL 3 - SPELLBOUND STONES\n\n\n\n\n");
	printf("\t\tCongratulations you have reached the final destination of your quest. You can\n\t\tfinally retrieve the magic stones now. But its not as easy as it sounds.\n\t\tThe magic stones are spellbound by the Stones Keepers so that anyone who is not\n\t\tworthy cannot take them. You must prove you are worthy by answering the Keeper's\n\t\triddle. You answer correctly, get the stone.\n\n\n");
	printf("\t\tNavigate through the maze to reach the magic stones. Upon encountering a stone\n\t\tyou will be presented by a riddle. Answer the riddle in one word. If youre correct,\n\t\tyou get the stone. Collect all 5 stones to complete your quest.\n\n\n");
	printf("\t\tC --- Represents your CHARACTER\n\t\t$ --- Represents Magic Stones\n\t\t# --- Represents Walls of Maze\n\n\n\n");
	printf("\t\t\t\t\tGood luck! May the odds ever be in your favour\n\n\n\n");
	printf("\t\tPRESS ANY KEY TO CONTINUE...");
	getch();
	
}

void riddle(void) {
	
    char user_answer[15];
    if(riddl==1)
    {
	
    printf("What comes once in a minute, twice in a moment, but never in a thousand years?\nYour answer: ");
    do{
    scanf("%s", user_answer);
    if(strcmp(user_answer, "m") == 0){
	
   printf("\n\tHurray! you earned the stone. press any key to continue" );
    getch();
	break;}
    else
    printf("\n\tWrong, try again ");
	}while(1);
	}
	
	else if(riddl==2)
	{
		
	    printf("What has many keys but can't open a single lock? ");
	    do{
	    scanf("%s", user_answer);
	    if(strcmp(user_answer, "piano") == 0){
		
	    printf("\n\tHurray! you earned the stone. press any key to continue" );
	    getch();
		break;}
	    else
	    printf("\n\tWrong, try again ");
	}while(1);
	}
	else if(riddl==3)
	{
		
	    printf("What can fly but doesn't have wings: ");
	    do{
	    scanf("%s", user_answer);
	    if(strcmp(user_answer, "time") == 0){
		
	   printf("\n\tHurray! you earned the stone. Press any key to continue" );
	    getch();
		break;}
	    else
	    printf("\n\tWrong, try again ");
	}while(1);
	}
	
	else if(riddl==4)
	{
		
	    printf("What word is spelled incorrectly in every single dictionary? ");
	    do{
	    scanf("%s", user_answer);
	    if(strcmp(user_answer, "incorrectly") == 0){
		
	    printf("\n\tHurray! you earned the stone. Press any key to continue" );
	    getch();
		break;}
	    else
	    printf("\n\tWrong, try again ");
	}while(1);
	}
	
	else if(riddl==5)
	{
		
	    printf("What has cities, but no houses; forests, but no trees; and rivers, but no water? ");
	    do{
	    scanf("%s", user_answer);
	    if(strcmp(user_answer, "map") == 0){
		
	    printf("\n\tHurray! you earned the stone. Press any key to continue" );
	    getch();
	    printf("\n\n\tCONGRATULATIONS! YOUVE COLLECTED ALL THE STONES" );
	    getch();
		break;}
	    else
	    printf("\n\tWrong, try again ");
	}while(1);
	}
	riddl++;
	if(riddl>5){
		test2 = 1;
		outro();
	}
	}


void printgrid(char grid[ROWS][COLS], int playerRow, int playerCol) {
	int i,j;
    system("cls");  

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (i == playerRow && j == playerCol) {
                printf("C ");
            } else {
                printf("%c ", grid[i][j]);
            }
        }
        printf("\n");
    }

    printf("\n");
}

void handleCollision(char obstacle) {
	int flag=0;
     if (obstacle == '$') {
        printf("You have encoutered a Keeper! Answer the following riddle correctly in one word to obtain magic stone\n");
        riddle();    
    
	  }
      
}

int isValidMove(int row, int col, char grid[ROWS][COLS]) {
    return row >= 0 && row < ROWS && col >= 0 && col < COLS && grid[row][col] != '#' && grid[row][col] != 'E' && grid[row][col] != '$' ;
}

void movePlayer(char grid[ROWS][COLS], int* playerRow, int* playerCol, char direction) {
    int newRow = *playerRow;
    int newCol = *playerCol;

    switch (direction) {
        case 'w':
            newRow--;
            break;
        case 's':
            newRow++;
            break;
        case 'a':
            newCol--;
            break;
        case 'd':
            newCol++;
            break;
    }

    if (!isValidMove(newRow, newCol, grid)) {
        handleCollision(grid[newRow][newCol]);
        return;
    }

    grid[*playerRow][*playerCol] = ' ';
    *playerRow = newRow;
    *playerCol = newCol;
    grid[*playerRow][*playerCol] = 'P';
}

void game3(){
	char grid[ROWS][COLS] = {
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
       	{'#',' ','#','#','#','#','#','#','#','#','#','#',' ','#','#','#','#','#','#',' ',' ',' ','#',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#','$',' ',' ',' ',' ',' ',' ',' ','#',' ','#'},
        {'#',' ',' ','#','#','#','#','#','#','#',' ',' ',' ','#','#','#','#','#',' ',' ',' ',' ','#',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#',' ',' ','#',' ','#'},
        {'#','#','#','#','#',' ',' ','#','#','#','#','#','#','#','#','#',' ','#',' ','#',' ',' ','#',' ','#'},
        {'#','$','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#','#','#','#',' ','#'},             
        {'#',' ','#',' ','#','#','#','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ','#',' ','#',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ','#',' ','#',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#',' ',' ','#'},
        {'#',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#','#','#','#',' ','#',' ',' ',' ',' ',' ','#'},
        {'#',' ','#',' ','#','#',' ','#','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ','#','#','#','#','#'},
        {'#','#','#',' ','#',' ',' ',' ',' ','#','#','#','#','#',' ',' ',' ',' ','#',' ','#',' ',' ',' ','#'},    
        {'#','$','#',' ','#','#','#',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#',' ','#'},
        {'#',' ','#',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#',' ','#'},
        {'#',' ','#','#','#',' ','#',' ','#','#','#','#','#','#','#','#','#','#','#',' ','#',' ','#',' ','#'},
        {'#',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#'},
        {'#',' ','#',' ','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ','#',' ',' ',' ','#',' ','#'},
        {'#',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#','#','#','#','#','#','#'},
        {'#',' ','#',' ','#',' ',' ',' ','#','#','#','#','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ','#',' ','#',' ',' ',' ','#','$','#',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ','#',' ','#',' ',' ',' ','#',' ','#',' ','#',' ','#',' ','#','#','#','#','#',' ',' ',' ','#'},
        {'#',' ','#',' ','#',' ','#',' ','#',' ','#',' ','#',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ','#'},
        {'#',' ','#',' ','#','$','#',' ','#',' ','#',' ','#',' ','#',' ',' ',' ','#','#','#',' ',' ',' ','#'},
        {'#',' ','#',' ','#','#','#',' ','#',' ','#',' ','#',' ','#','#','#','#','#',' ',' ',' ','#',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}};

    int playerRow = 0;
    int playerCol = 0;

    grid[playerRow][playerCol] = 'C';

    char userInput;
    while (1) {
        printgrid(grid, playerRow, playerCol);
       
        userInput=getch();

        if (userInput =='q') {
            break;
        }

        if (userInput == 'w' || userInput == 'a' || userInput == 's' || userInput == 'd') {
            movePlayer(grid, &playerRow, &playerCol, userInput);
        } 
    }
}

int main() {
	int i,a=1;  
	int opt2;
	char opt1,temp[100];
	// INTRO PAGE
	system("cls");
	getch();	
	if(c==0){
			PlaySoundA(TEXT("C:\\Users\\kk\\Desktop\\project\\teamintro.wav"), NULL, SND_FILENAME | SND_ASYNC);
			
	    	preintro();
	    	Sleep(1300);
	    	system("cls");
	    	for(i=0;i<3;i++){
	    		introname();
	    		Sleep(400);
		   		system("cls");
			}
	    	system("cls");
			for(i=0;i<7;i++){
				system("cls");
				intro();
			}
			gotoxy(29+21,12);printf("W E L C O M E  T O");                                                                    
	    	gotoxy(29+8,16);printf("P R E S S  A N Y  K E Y  T O  C O N T I N U E"); 
	    	c=1;
            getch();
        }
    introduction();
    instruction();
    game1intro();
    PlaySoundA(TEXT("C:\\Users\\kk\\Desktop\\project\\game1.wav"), NULL, SND_FILENAME | SND_ASYNC);
    game1();
    
    if(test1==1){
	
	    game2intro();
	    PlaySoundA(TEXT("C:\\Users\\kk\\Desktop\\project\\game2.wav"), NULL, SND_FILENAME | SND_ASYNC);
	    game2();
		while(test==0){
	        char r;
	        printf("\n\n\tTime's UP!!!!\n\n");
	        printf("Do you want to replay the game (Press 'Y' for YES and 'N' for NO): ");
	        scanf(" %c",&r);
	
	        if(r=='Y'){
	            game2();
	        }
	        else if(r=='N'){
	            break;
	        }
		}
		if(test==1){
		
			game3intro();
			PlaySoundA(TEXT("C:\\Users\\kk\\Desktop\\project\\game3.wav"), NULL, SND_FILENAME | SND_ASYNC);
			game3();
			
			if(test2 != 1){
				printf("\n\n\tYou didn't cleared the third level!!");
			}
		}
	
		else{
			printf("\n\n\tYou didn't cleared the second level!!");
		}
	}
	else{
		printf("\n\n\tYou didn't cleared the first level!!");
	}
    
}
