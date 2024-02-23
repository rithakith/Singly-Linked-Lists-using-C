#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int traverse(struct Node *Head);

int main()
{
    struct Node *Head;
    Head = NULL;
    int no;
    printf("Enter no of inputs: ");
    scanf("%d", &no);

    for (int i = 0; i < no; i++)
    {
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter node %d :", i + 1);
        scanf("%d", &temp->data);
        temp->next = NULL;

        if (Head == NULL)
        {
            Head = temp;
        }
        else
        {
            temp->next = Head;
            Head = temp;
        }
    }
    traverse(Head);
}

int traverse(struct Node *Head)
{
    struct Node *ptr = Head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
