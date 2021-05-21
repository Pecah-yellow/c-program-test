#include <iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
#include <conio.h>

using namespace std;

int main() {
    int i, j;
    srand(time(NULL));
    int a = rand() % 8;
    int b = rand() % 8;
    int c = rand() % 8;
    int d = rand() % 8;
    while (true) {
        int map[8][8] = { 0 };
        map[a][b] = 1;
        map[c][d] = 2;
        for (i = 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                cout << map[i][j] << " ";
            }
            cout << endl;
        }
        int key = rand() % 3;
        if (key == 0&&a>0) {//╩С
            a--;
        }
        else if (key == 1&&a<7) {//го
            a++;
        }
        else if (key == 2&&b>0) {//аб
            b--;
        }
        else if (key == 3&&b<7) {//©Л
            b++;
        }
        Sleep(100);
        system("cls");
        if (map[a][b] == map[c][d]) {
            system("pause");
        }
    }
}

