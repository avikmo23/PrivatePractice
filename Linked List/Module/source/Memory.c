#include <list.h>

VOID
AllocateAndInitNode(
    SIZE_T sSize,
    PLINKED_LIST* ppNewNode
)
{
    PLINKED_LIST pNewNode = NULL;

    if (sSize == 0)
    {
        sSize = 1;
    }

    pNewNode = (PLINKED_LIST)calloc(1, sSize);
    if (pNewNode == NULL)
    {
        printf("Not enough memory to be allocated this node\n");
        *ppNewNode = NULL;
        exit(1);
    }
    pNewNode->iValue = 0;
    pNewNode->pNext = NULL;

    *ppNewNode = pNewNode;
}

VOID
FreeNode(PLINKED_LIST* ppNodeToBeFreed)
{
    if (*ppNodeToBeFreed)
    {
        free(*ppNodeToBeFreed);
        *ppNodeToBeFreed = NULL;
    }
}
