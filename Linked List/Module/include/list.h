#include <stdio.h>
#include <stdlib.h>

typedef int INT, *PINT;
typedef size_t SIZE_T;
typedef void VOID;

typedef struct _LINKED_LIST
{
    INT iValue;
    struct _LINKED_LIST* pNext;
}LINKED_LIST, *PLINKED_LIST;


VOID
AllocateAndInitNode(
    SIZE_T sSize,
    PLINKED_LIST* ppNewNode
);

VOID
FreeNode(
    PLINKED_LIST* ppNodeToBeFreed
);

VOID
PrintNode(
    PLINKED_LIST pHead
);

VOID
InsertNodeAtBeginning(
    PLINKED_LIST* ppHead,
    INT iValue
);

VOID
DeleteNodeFromBeginning(
    PLINKED_LIST* ppHead
);
