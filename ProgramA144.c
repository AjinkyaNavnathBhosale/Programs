// Assign No. = 29 - 4. Write a program which returns 
// Largest element from singly linear linked list.

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

int Maximum(PNODE Head)
{
    int iMax = Head->data;

    while(Head != NULL)
    {
        if((Head->data) > iMax)
        {
            iMax = Head->data;
        }
        Head = Head -> next;
    }
    return iMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);
    
    Display(First);
    
    iRet = Maximum(First);
    printf("Largest elements is : %d\n",iRet);
    
    return 0;
}