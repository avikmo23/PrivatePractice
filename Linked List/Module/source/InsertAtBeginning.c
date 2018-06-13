#include <list.h>

VOID
InsertNodeAtBeginning(PLINKED_LIST* ppHead, INT iValue)
{
    PLINKED_LIST pNewNode = NULL;

    AllocateAndInitNode(sizeof(LINKED_LIST), &pNewNode);
    if (pNewNode == NULL)
    {
        printf("Not enough memory to be allocated the node\n");
        exit(1);
    }

    pNewNode->iValue = iValue;
    pNewNode->pNext = *ppHead;

    *ppHead = pNewNode;
}
