#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

// 1111111111111111111111111111
/*
    int a1, b1;
    cout << "Num A: ";
    cin >> a1;
    cout << "Num B: ";
    cin >> b1;
    if (a1 + b1 >= 10 && a1 + b1 <= 20)
        cout << "true";
    else
        cout << "False";
*/
// 2222222222222222222222222222
/*
    int a2, b2, c2 = 0;
    do
    {
    cout << "Num A: ";
    cin >> a2;
    }
    while (a2 <= 0);

    for ( int i = 1; i < a2+1; i++)
    {
    if (a2 % i == 0)
        c2++;
    }
    if (c2 <= 2)
        cout << "Prostoe";
    else
        cout << "nifiga ne prostoe";
*/
// 333333333333333333333333333
/*
    int a3, b3;
    cout << "Num A: ";
    cin >> a3;
    cout << "Num B: ";
    cin >> b3;
    if ((a3 == 10 && b3 == 10) || (a3 + b3 == 10))
        cout << "True";
    else
        cout << "False";
*/
// 444444444444444444444444444
/*
    int a4;
    cout << "Year: ";
    cin >> a4;
    if ((a4 % 4 == 0) && (a4 % 100 != 0) || (a4 % 400 == 0))
        cout << "Viskas :(";
    else
        cout << "Chapi :)";
*/
    return 0;
}
