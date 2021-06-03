#include <iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
#include <conio.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
using namespace std;

int main() {
    int i, j;
    srand(time(NULL));
    int map[8][8];
    int ax = rand() % 8;
    int ay = rand() % 8;
    int bx = ax + 1;
    int by = ay;
    while (true) {
        int map[8][8] = { 0 };
        map[ax][ay] = 1; //head
        map[bx][by] = 2; //body
        for (i = 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                cout << map[i][j] << " ";
            }
            cout << endl;
        }
        int key = _getch();
        if (key == UP && ax > 0) {
            bx = ax;
            by = ay;
            ax--;
        }
        else if (key == DOWN && ax < 7) {
            bx = ax;
            by = ay;
            ax++;
        }
        else if (key == LEFT && ay > 0) {
            bx = ax;
            by = ay;
            ay--;
        }
        else if (key == RIGHT && ay < 7) {
            bx = ax;
            by = ay;
            ay++;
        }
        system("cls");
    }
}