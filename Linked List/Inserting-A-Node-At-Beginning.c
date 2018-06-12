#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int ivalue;
    struct Node* pNext;
}NODE;

void
AllocateAndInitNode(size_t iSize, NODE** ppNewNode)
{
    NODE* pNewNode = NULL;

    if (iSize == 0)
    {
        iSize = 1;
    }

    pNewNode = (NODE*)calloc(1, iSize);
    if (pNewNode == NULL)
    {
        printf("Not enough memory to be allocated this node\n");
        *ppNewNode = NULL;
        exit(1);
    }
    pNewNode->ivalue = 0;
    pNewNode->pNext = NULL;

    *ppNewNode = pNewNode;
}

void
InsertNodeAtBeginning(NODE** ppHead, int iValue)
{
    NODE* pNewNode = NULL;

    AllocateAndInitNode(sizeof(NODE), &pNewNode);

    pNewNode->ivalue = iValue;
    pNewNode->pNext = *ppHead;

    *ppHead = pNewNode;
}

void
PrintNode(NODE* pHead)
{
    int IsEmpty = 1;
    printf("List is: ");
    while (pHead != NULL)
    {
        printf("%d ", pHead->ivalue);
        pHead = pHead->pNext;
        IsEmpty = 0;
    }

    if (IsEmpty)
    {
        printf("empty");
    }
    printf("\n");
}

void
FreeNode(NODE** NodeToBeFreed)
{
    if (*NodeToBeFreed)
    {
        free(*NodeToBeFreed);
        *NodeToBeFreed = NULL;
    }
}

void
DeleteNodeFromBeginning(NODE** ppHead)
{
    NODE* pTempNode = NULL;
    NODE* pHead = NULL;

    if (*ppHead == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        pHead = *ppHead;

        pTempNode = pHead;
        pHead = pHead->pNext;
        FreeNode(&pTempNode);
        *ppHead = pHead;
    }
}


int main()
{
    NODE* pHead = NULL;
    int iNumber = 0;
    int iEntry = 0;
    int iIndex = 0;

    printf("How many entries?\n");
    scanf("%d", &iEntry);

    for (iIndex = 0; iIndex < iEntry; iIndex++)
    {
        printf("Enter the number: \n");
        scanf("%d", &iNumber);
        InsertNodeAtBeginning(&pHead, iNumber);
        PrintNode(pHead);
    }

    printf("Deleting nodes from beginning: \n");
    while (pHead != NULL)
    {
        DeleteNodeFromBeginning(&pHead);
        PrintNode(pHead);
    }

    return 0;
}
