#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;
void les51 (int arr01[]);
void les52 (int arr02[]);
void les53 (int arr03[], int &s);
void les54 (int arr04[], int &s, int &k);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
//11111111111111111111111111111
/*    int arr01[] = {0, 0, 0, 0, 1, 1, 1, 1};
      les51(arr01);
*/
//22222222222222222222222222222
/*
    int arr02[8];
    les52 (arr02);
*/
//33333333333333333333333333333
/*
    int s = 5;
    int arr03[s] = {10, 1, 2, 3, 4};
    les53(arr03, s);
*/
//44444444444444444444444444444
/*
    int s = 5;
    int k = -2;
    int arr04[s] = {1, 2, 3, 4, 5};
    les54(arr04, s, k);
*/
    return 0;
}

void les51 (int arr01[])
{
    for (int i = 0; i < 8; i++)
        arr01[i] = (arr01[i] != 1) ? 1 : 0;
}

void les52 (int arr02[])
{
    int j = 1;
    for (int i = 0; i < 8; i++)
    {
        arr02[i] = j;
        j += 3;
    }
}

void les53 (int arr03[], int &s)
{
    int a = arr03[0];
    int b = arr03[s - 1];
    int j = s - 1;
    int h = 0;
    for (int i = 0; i < s - 2; i++)
    {
            if (a == b)
            {
                j--;
                b += arr03[j];
            }
            else if (a > b)
            {
               j--;
               b += arr03[j];
            }
            else if (a < b)
            {
                h++;
                a += arr03[h];
            }

    }
    if (a == b)
        cout << "true" << endl;
    else
        cout << "false" << endl;

}

void les54(int arr04[], int &s, int &k)
{
    if (k > 0)
    {
        for (int t = k; t > 0; t--)
        {
            int a = arr04[s - 1];
            for (int i = s - 1; i > 0; i--)
                arr04[i] = arr04[i - 1];

            arr04[s - s] = a;
        }
    }
    else if (k < 0)
    {
        for (int y = 0; y > k; y--)
        {
            int b = arr04[0];
            for (int j = 0; j < s - 1; j++)
                arr04[j] = arr04[j + 1];

            arr04[s - 1] = b;
        }
    }
}
