
#include "geek.h"
#include "geek.c"
/*
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define T char

typedef struct OneLinkNode
{
    int dat;
    struct OneLinkNode *next;
} OneLinkNode;

typedef struct
{
    OneLinkNode *head;
    int size;
} OneLinkList;
*/
bool les10_1 (char *arr)
{
    int a = 0;
    int b = 0;
    int c = 0;

    for (int n = 0; n < 8; n++)
    {
        switch (arr[n])
        {
        case ('['):
            a++;
            break;
        case (']'):
            a--;
            break;
        case ('('):
            b++;
            break;
        case (')'):
            b--;
            break;
        case ('{'):
            c++;
            break;
        case ('}'):
            c--;
            break;
        }
        if ((a < 0) || (b < 0) || (c < 0))
            return false;

    }
    if ((a != 0) || (b != 0) || (c != 0))
            return false;
    return true;
}
/*
void initOneLinkList(OneLinkList *lst) //инициализ списка
{
    lst->head = NULL;
    lst->size = 0;
}

void printOneLinkIntList(OneLinkList *lst) //печать списка
{
    OneLinkNode *current = lst->head;
    if (current == NULL)
    {
        printOneLinkIntNode(current);
    } else {
        do
        {
            printOneLinkIntNode(current);
            current = current->next;
        } while (current != NULL);
    }
    printf(" Size: %d \n", lst->size);
}

void printOneLinkIntNode(OneLinkNode *n) //печать
{
    if (n == NULL)
    {
        printf("[]");
        return;
    }
    printf("[%d]", n->dat);
}

void freeOneLinkStack(OneLinkList *stack) //очистка памяти
{
    while(stack->size != 0)
    popOneLinkStack(stack);

    free(stack);
}

T popOneLinkStack(OneLinkList *stack)
{
    if (stack->size == 0)
    {
        printf("Stack is empty \n");
        return -1;
    }
    OneLinkNode *tmp = stack->head;
    T data = stack->head->dat;
    stack->head = stack->head->next;
    free(tmp);
    stack->size--;
    return data;
}

bool pushOneLinkStack(OneLinkList *stack, int value) {
    OneLinkNode *tmp = (OneLinkNode*) malloc(sizeof(OneLinkNode));
    if (tmp == NULL) {
        printf("Stack overflow \n");
        return false;
    }
    tmp->dat = value;
    tmp->next = stack->head;

    stack->head = tmp;
    stack->size++;
    return true;
}
*/
void copyList(OneLinkList* from, OneLinkList* to)
{
    int ElementsLeftToCopy = from->size; // колво элементов для копирования
    OneLinkNode *current = from->head;
    while (ElementsLeftToCopy != 0)
    {
        for (int i = 0; i < ElementsLeftToCopy - 1; ++i)
        {
            current = current->next;
        }
        pushOneLinkStack(to, current->dat);
        ElementsLeftToCopy--;
        current = from->head;
    }
}

void les10_2 ()
{
        OneLinkList* orList = (OneLinkList*) malloc (sizeof(OneLinkList)); //память
        initOneLinkList(orList); //инициализация
        for (int i = 9; i > 0; --i)
        {
            pushOneLinkStack(orList, i);
        }

        OneLinkList* ListCopy = (OneLinkList*) malloc (sizeof(OneLinkList));
        initOneLinkList(ListCopy);

        printOneLinkIntList(orList); // печать оригинала
        copyList(orList, ListCopy); // копирование
        printOneLinkIntList(ListCopy); // печать копии

        freeOneLinkStack(orList);  //освобождение памяти
        freeOneLinkStack(ListCopy);
}


int main()
{
    char arr[] = {'[', ']', '[', ']', '[', '[', '[', ']'};
    les10_1(arr);
    printf("end \n");
    les10_2();

    return 0;
}
