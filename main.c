#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    int i = 2;

    printf("������� �����\n");
    scanf("%d", &a);
    while (i < a)
        {
            if (a % i == 0)
                {
                    printf("����� %d �� �������", a);
                    i++;
                    break;
                }
            else
			{ 
				printf("����� %d �������", a);
            		break;
			}
        }
    return 0;
}
