#include <iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
#include <conio.h>

using namespace std;

int main() {
    int i, j;
    int round = 0;
    srand(time(NULL));
    int a = rand() % 6;
    int b = rand() % 6;
    int c = rand() % 6;
    int d = rand() % 6;
    while (true) {
        int map[6][6] = { 0 };
        map[c][d] = 5;  
        int key = rand() % 3;
        if (key == 0 && a > 0) {//╩С
            a--;
        }
        else if (key == 1 && a < 5) {//го
            a++;
        }
        else if (key == 2 && b > 0) {//аб
            b--;
        }
        else if (key == 3 && b < 5) {//©Л
            b++;
        }
        if (round % 2 == 0) {
            map[a][b] = 1;
        }
        else if (round % 2 == 1) {
            map[a][b] = 2;
        }       
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 6; j++) {
                cout << map[i][j] << " ";
            }
            cout << endl;
        }
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 6; j++) {
                map[i][j] = 0;
            }            
        }
        Sleep(300);
        system("cls");
        if (a==c&&b==d) {
            system("pause");
        }
        round++;

    }

}