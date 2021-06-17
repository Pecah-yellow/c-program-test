#include <iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
#include <conio.h>

using namespace std;

int main() {
    srand(time(NULL));
    int money = 10, day = 0;

    for (day = 0; day < 10; day++) {
        int key = rand() % 2;
        if (key == 0) {
            money = money + 2;
        }
        else if (key == 1) {
            money = money - 1;
        }
        cout << day + 1 << " : ";
        for (int j = 0; j < money; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
}