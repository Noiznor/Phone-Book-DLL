#include "DLL.h"

void delete_beginning()
{
    struct node *temp = head;

    if (head == NULL)
        return;

    if (head->next != NULL)
        head->next->prev = NULL;

    head = head->next;
    free(temp);
    printf("Deletion successful\n");
}

void delete_end()
{
    struct node *temp = head;

    if (head == NULL)
        return;

    if (head->next == NULL)
    {
        head = NULL;
        free(temp);
        return;
    }

    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    printf("Deletion successful\n");
    temp->next = NULL;
}

void delete_middle(int position)
{
if (head == NULL)
{
printf("List is empty\n");
return;
}
struct node *temp, *prev;
temp = head;
for (int i = 0; i < position - 1; i++)
{
prev = temp;
temp = temp->next;
if (temp == NULL)
{
printf("There are less than %d elements in the list\n", position);
return;
}
}
if (temp != NULL)
{
prev->next = temp->next;
temp->next->prev = prev;
free(temp);
printf("Deletion successful\n");
}
else
{
printf("Node not found\n");
}
}

