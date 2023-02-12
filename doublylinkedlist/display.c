#include "DLL.h"

void display()
{
    struct node *temp = head;
    printf("\nList elements are: \n");
    int element_count = 1;
    while (temp != NULL)
    {
        printf("\nElement %d:\n", element_count);
        printf("\nFirst Name: %s\nMiddle Name: %s\nLast Name: %s\nPhone Number: %s\nEmail Address: %s\n\n", temp->first_name, temp->middle_name, temp->last_name, temp->phone_number, temp->email_address);
        temp = temp->next;
        element_count++;
    }
    printf("\n");
}

