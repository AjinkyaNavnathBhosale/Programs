// Assign No. = 31 - 5. Write a program which display largest digit of
// All elements of singly linear linked list.

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

void DisplayLarge(PNODE Head)
{
    int iDigit = 0;
    int iMax = 0;

    while(Head != NULL)
    {
        while((Head -> data) != 0)
        {
            iDigit = (Head->data % 10);
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            Head->data = (Head->data / 10);
        }
            printf("| %d |\t",iMax);
        Head = Head -> next;
    }
}
        

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 76);
    InsertFirst(&First, 67);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    
    Display(First);
    DisplayLarge(First);
    
    return 0;
}