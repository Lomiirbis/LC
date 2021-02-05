#include <iostream>
#include <windows.h>
#include "zad04.h"

using namespace std;
void zad04();
    extern int a;                      // задание 3    принципа не до конца понимаю extern, и с указателями и ссылками разбираюсь ещё :(
    extern int b;
    extern int c;
    extern int d;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //int a = 5;                      // задание 1
    //int b = 4;
    //int c = 10;
    //int d = 3;
    float y;
    zad04();

    y = (((c / static_cast<float>(d)) + b) * a);
    cout << y << endl;

    int a2 = 41;                    // задание 2
    int b2 = 21;
    int c2 = (a2 > b2) ? ((a2 - b2) << 1) : (b2 - a2);
    cout << c2 << endl;

    return 0;
}
