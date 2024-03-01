// Assign No. = 30 - 1. Write a program which display all elements which
// are Perfect from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)   
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Displayperfect(PNODE Head)
{
    int iSum = 0, iSum1 = 0;
    int iCnt = 0;

    while(Head != NULL)
    {
        for(iCnt = 2; iCnt < Head->data; iCnt++)
        {
            if(((Head->data) % iCnt) == 0)
            {
                iSum = Head->data;
                iSum == Head->data;
                printf("%d\t",iSum);
            }
        }
        Head = Head -> next;
    }
    return (iSum == Head->data);
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    
    Display(First);
    
    iRet = Displayperfect(First);
    printf("\nDisplay perfect no : %d",iRet );
    
    return 0;
}