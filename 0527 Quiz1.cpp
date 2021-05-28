#include <iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
#include <conio.h>

using namespace std;
#define SPACE 32
#define UP true
#define DOWN false

int main() {
    srand(time(NULL));
    int x = 5;
    int y = rand() % 6;
    int tx = 0;
    int map[6][6] = { 0 };
    bool upAndDown = UP;

    int key = _getch();
    if (key == SPACE) {
        system("cls");
        while (true) {
            int map[6][6] = { 0 };
            map[x][y] = 1;
            for (int i = 0; i < 6; i++) {
                for (int j = 0; j < 6; j++) {
                    cout << map[i][j] << " ";
                }
                cout << endl;
            }
            if (x == 0) {
                upAndDown = DOWN;
            }
            else if (x == 5) {
                upAndDown = UP;
            }
            if (upAndDown) {
                x--;
            }
            else {
                x++;
            }
            Sleep(300);
            system("cls");
        }
    }
}