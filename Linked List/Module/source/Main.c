#include<list.h>

int main()
{
    PLINKED_LIST pHead = NULL;
    INT iNumber = 0;
    INT iEntry = 0;
    INT iIndex = 0;

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
