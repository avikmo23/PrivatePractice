#include <list.h>

VOID
PrintNode(PLINKED_LIST pHead)
{
    INT IsEmpty = 1;
    printf("List is: ");
    while (pHead != NULL)
    {
        printf("%d ", pHead->iValue);
        pHead = pHead->pNext;
        IsEmpty = 0;
    }

    if (IsEmpty)
    {
        printf("empty");
    }
    printf("\n");
}
