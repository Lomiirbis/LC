#include <stdio.h>
#include <stdlib.h>

int  hash(char *S)
{
    int i,r=0;
    while(*S)
    {
        r+=(int)(*S);
        S++;
    }
     return r;
}

int main()
{
    printf("%d ",hash("qwert"));
    return 0;
}
