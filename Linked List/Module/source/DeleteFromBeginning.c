#include <list.h>

VOID
DeleteNodeFromBeginning(PLINKED_LIST* ppHead)
{
    PLINKED_LIST pTempNode = NULL;
    PLINKED_LIST pHead = NULL;

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
