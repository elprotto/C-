#include <stdio.h>
#include <windows.h>

void SetCursor(int x, int y)
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hCon, dwPos);
}


int main()
{
    /*
    printf("*");

    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = 4;
    dwPos.Y = 5;

    SetConsoleCursorPosition(hCon, dwPos);
    printf("*");

    dwPos.X = 18;
    dwPos.Y = 6;
    SetConsoleCursorPosition(hCon, dwPos);
    printf("*");
    */

    SetCursor(25,25); printf("*");

    return 0;
}


