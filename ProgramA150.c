// Assign No. = 30 - 5. Write a program which display 
// Addition of digits of elements from singly linear linked list.

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

int SumDigit(PNODE Head)
{
    int iSum = 0;
    int iDigit = 0;

    while(Head != NULL)
    {
        while((Head -> data) != 0)
        {
            iDigit = (Head->data % 10);
            iSum = iSum + iDigit;
            Head->data = Head->data / 10;
        }
            printf("%d",iSum);
        Head = Head -> next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    
    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);
    
    Display(First);
    iRet = SumDigit(First);
    printf("Sum of Digit is : %d\t",iRet);
    
    return 0;
}