#include <stdio.h>
#include <stdlib.h>

void qs(int* arr, int first, int last) //улучшенная сортировка, Хоара
{
    int i = first;
    int j = last;

    int x = arr[(first + last) / 2];
    do
    {
        while (arr[i] < x) i++;
        while (arr[j] > x) j--;

        if (i <= j)
        {
            swapInt(&arr[i], &arr[j]);
            i++;
            j--;
        }
    } while (i <= j);

    if (i < last) qs(arr, i, last);
    if (first < j) qs(arr, first, j);
}

void printIntArr(int* array, int size)
{
    printf("\n");
    for (int i = 0; i < size; ++i)
        {
        printf(" %d", array[i]);
        if (i != size - 1)
            printf(",");
        }
    printf("\n");
}

void fillIntRandom(int* array, int size, int border)
{
    for (int i = 0; i < size; ++i)
        *(array + i) = rand() % border;
}

void swapInt(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void insertSort(int* arr, int sz) //сортировка вставками
{
    int num;
    int pos;

    for (int i = 1; i < sz; i++)
    {
        num = arr[i];
        pos = i - 1;
        while(pos >= 0 && arr[pos] > num)
        {
            arr[pos+1] = arr[pos];
            pos = pos - 1;
        }
        arr[pos+1] = num;
    }
}

void les71 (int* arr, int sz)
{
    if (sz <= 0)
    {
        printf("Ups \n");
        return -1;
    }
    else if (sz <= 10)
    {
        printf("Sort insert: \n");
        insertSort(arr, sz);
    }
    else if (sz > 10)
    {
        if ((arr[(sz - 1) / 2] < arr[sz - 1]) && (arr[(sz - 1) / 2] < arr[0]) && (arr[0] < arr[sz - 1]) || (arr[(sz - 1) / 2] > arr[sz - 1]) && (arr[(sz - 1) / 2] > arr[0]) && (arr[0] > arr[sz - 1]))
        {
            int t = arr[0];
            arr[0] = arr[(sz - 1) / 2];
            arr[(sz - 1) / 2] = t;
        }
        else if ((arr[(sz - 1) / 2] > arr[sz - 1]) && (arr[(sz - 1) / 2] > arr[0]) && (arr[0] < arr[sz - 1]) || (arr[(sz - 1) / 2] < arr[sz - 1]) && (arr[(sz - 1) / 2] < arr[0]) && (arr[0] > arr[sz - 1]))
        {
            int t = arr[sz - 1];
            arr[sz - 1] = arr[(sz - 1) / 2];
            arr[(sz - 1) / 2] = t;
        }
        printf("Quick Sort: \n");
        qs(arr, 0, sz - 1);
    }

}

void les72(int* arr, int len)
{
    const int max = len;
    const int b = 10;

    int buckets[b][max+1];
    for (int i = 0; i < b; ++i)
    {
        buckets[i][max] = 0;
    }

    for (int digit = 1; digit < 1000000; digit *= 10)
    {
        for (int i = 0; i < max; ++i)
        {
            if (arr[i] % 2 == 0)
            {
               int d = (arr[i] / digit) % b;

                int counter = buckets[d][max];
                buckets[d][counter] = arr[i];
                counter++;
                buckets[d][max] = counter;
                arr[i] = -1;
            }
        }
        int idx = 0;
        for (int i = 0; i < b; ++i)
        {
            for (int j = 0; j < buckets[i][max]; ++j)
            {
                while (arr[idx] != -1)
                    idx++;

                arr[idx] = buckets[i][j];
            }
            buckets[i][max] = 0;
        }
    }
}


int main()
{
    const int sz = 20;
    int arr[sz];
    fillIntRandom(arr, sz, 50);
    printIntArr(arr, sz);
    printf("\n");
    les71(arr, sz);
    printIntArr(arr, sz);
    printf("\n");

    const int sz2 = 12;
    int arr2[sz2];
    fillIntRandom(arr2, sz2, 50);
    printIntArr(arr2, sz2);
    les72(arr2, sz2);
    printIntArr(arr2, sz2);

    return 0;
}
