#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>

int board[10] = {2,2,2,2,2,2,2,2,2,2};
int turn = 1;
int player, comp;

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
    menu();
    getch();
}

void menu()
{
    int choice;
    system("cls");
    printf("\n--------MENU--------");
    printf("\n1 : Play with X");
    printf("\n2 : Play with O");
    printf("\n3 : Exit");
    printf("\nEnter your choice:>");
    scanf("%d",&choice);
    turn = 1;
    switch (choice)
    {
    case 1:
        player = 1;
        comp = 0;
        player_first();
        break;
    case 2:
        player = 0;
        comp = 1;
        start_game();
        break;
    case 3:
        exit(1);
    default:
        menu();
    }
}