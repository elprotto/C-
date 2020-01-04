#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <iostream>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

using namespace std;

void HideCursor()
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO dataStructure;
    dataStructure.bVisible = FALSE; //TRUE
    dataStructure.dwSize = 2;

    SetConsoleCursorInfo(hCon, &dataStructure);
}

int main()
{
    HideCursor();
    // conio::kbhit() this function detects if a key is pressed
    bool endScanning = false;
    while(!endScanning)
    {
        if(kbhit()){
            // conio::getch() this function gets the pressed key
            char pressedKey = getch();
            if (pressedKey == 'w'){
                printf("Key <w> was pressed \n");
            }else if (pressedKey == 'a') {
                printf("Key <a> was pressed \n");
                }else if (pressedKey == 's') {
                    printf("Key <s> was pressed \n");
                    }else if (pressedKey == 'd'){
                    printf("Key <d> was pressed \n");
                    }else if (pressedKey == KEY_UP){
                        printf("Key <upRow> was pressed \n");
                    }else if (pressedKey == KEY_DOWN){
                        printf("Key <downRow> was pressed \n");
                    }else if (pressedKey == KEY_LEFT){
                        printf("Key <leftRow> was pressed \n");
                    }else if (pressedKey == KEY_RIGHT){
                        printf("Key <rightRow> was pressed \n");
                    }
        }
        Sleep(120);
    }


    return 0;
}
