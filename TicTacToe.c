#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>

int board[10] = {2,2,2,2,2,2,2,2,2,2};
int turn = 1;
int player;

void menu();
void go(int n);
void start_game();
void draw_board();
void player_first();
COORD coord= {0,0}; // this is global variable
//center of axis is set to the top left cornor of the screen
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void main()
{
    system("cls");



    getch();
}