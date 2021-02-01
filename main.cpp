#include <iostream>
#include <windows.h>

using namespace std;

typedef struct {
    int krest;
    int nolik;
    int pusto;
} krest;

int a1;
long a2;
short a3;
unsigned int a4;
char a5;
float a6;
double a7;
extern int a11;
static int a12;

enum game {Zero, Gamer1, Gamer2};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i;
    char kn [3] = {'-', 'X', 'O'};
    char pole [3][3] = {{kn[0], kn[0], kn[0]}, {kn[0], kn[0], kn[0]}, {kn[0], kn[0], kn[0]}};
    for (i = 0; i <= 2; i++)
    {
        cout << pole [i][0] << pole [i][1] << pole [i][2] << endl;
    }
    return 0;
}
