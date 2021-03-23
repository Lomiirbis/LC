#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printArray(int* arr[][3]); //6.1
void SortArray(int* arr[][3]);  //6.1
void les62(float* p, int n); //6.2

int main()
{
    int arr[3][3] = {{1, 9, 2}, {5, 7, 6}, {4, 3, 8}};
    printArray(*arr);
    printf("\n");
    SortArray(*arr);
    printArray(*arr);

    const int n = 11;
    float p[n];
    les62(&p, n);


    return 0;
}

void printArray(int* arr[][3])  //6.1
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
                printf("%d ", arr[i][j]);
        }
         printf("\n");
    }
}

void SortArray(int* arr[][3])  //6.1
{
    int temp;
    for (int a = 0; a < 3; ++a)
    {
        for (int b = 0; b < 3; ++b)
        {
            for (int i = 0; i < 3; ++i)
            {
                for (int j = 0; j < 3; ++j)
                {
                    if (j + 1 == 3 && arr[i][j] > arr[i + 1][0])
                    {
                        temp = arr[i][j];
                        arr[i][j] = arr[i + 1][0];
                        arr[i + 1][0] = temp;
                    }
                    else
                    {
                        if (arr[i][j] > arr[i][j + 1])
                        {
                            temp = arr[i][j];
                            arr[i][j] = arr[i][j + 1];
                            arr[i][j + 1] = temp;
                        }
                    }
                }
            }
        }
    }
}

void les62(float* p, int n)
{
    for (int i = 0; i < 11; ++i)
    {
        printf("Input num %d: ", i + 1);
        scanf("%f", &p[i]);
    }

    printf("First mas: ");
    for (int i = 0; i < 11; ++i)
    {
        printf(" %.2f ", p[i]);
    }

    for (int i = 0; i < (n / 2); ++i ) //invert
    {
        int temp;
        temp = p[i];
        p[i] = p[(n - 1) - i];
        p[(n - 1) - i] = temp;
    }
    printf("\n");
    printf("invert mas: ");
    for (int i = 0; i < 11; ++i)
    {
        printf(" %.2f ", p[i]);
    }
    printf("\n");

    for (int i = 0; i < 11; ++i)
    {
        p[i] = sqrt(fabs(p[i]) + 5 * pow(p[i], 3));
        if (p[i] > 400)
            printf(" %.2f > 400 !!! \n", p[i]);
        else
            printf(" %.2f \n", p[i]);
    }

}
