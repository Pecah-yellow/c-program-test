#include <iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
#include <conio.h>

using namespace std;

int main() {
    int i, j;
    srand(time(NULL));
    int map[8][8];
    int a = rand() % 6;
    int b = rand() % 6;
    int c = rand() % 6;
    int d = rand() % 6;
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
        int key = _getch();
        if (key == 72) {//╩С
            a--;
        }
        else if (key == 80) {//го
            a++;
        }
        else if (key == 75) {//аб
            b--;
        }
        else if (key == 77) {//©Л
            b++;
        }
        system("cls");

        if (map[a][b] == map[c][d]) {
            system("pause");
        }
    }
}

