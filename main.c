#include <stdio.h>
#include <stdlib.h>

#define T char
#define SIZE 100
#define true 1==1
#define false 1!=1

typedef int boolean;
int cursor = -1;
T stask [SIZE];

boolean push (T data)
{
    if (cursor < SIZE)
    {
        stask[++cursor] = data;
        return true;
    }
    else
    {
        return false;
    }
}

T pop()
{
    if (cursor != -1)
    {
        return stask[cursor--];
    }
    else
    {
        return -1;
    }
}

int bin (int ch)
{
    while (ch > 0)
    {
        if (ch % 2 == 0)
        {
            push('0');
        }
        else
        {
            push('1');
        }
        ch /= 2;
    }
}

//////////////////////////////////////////
int main()
{
    int ch;
    printf("input num: \n");
    scanf("%d", &ch);
    bin(ch);
    while (cursor != -1)
    {
        printf("%c ", pop());
    }


    return 0;
}
