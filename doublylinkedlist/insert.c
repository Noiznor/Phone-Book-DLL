#include "DLL.h"

void insert_beginning(char fname[30], char mname[30], char lname[30], char pn[20], char ea[30])
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));

    strcpy(new_node->first_name, fname);
    strcpy(new_node->middle_name, mname);
    strcpy(new_node->last_name, lname);
    strcpy(new_node->phone_number, pn);
    strcpy(new_node->email_address, ea);
    new_node->prev = NULL;
    new_node->next = head;
    if (head != NULL)
        head->prev = new_node;
    head = new_node;
}

void insert_middle(char fname[20], char mname[20], char lname[20], char pn[20], char ea[30], int loc)
{
    int i;
    struct node *new_node, *temp;
    temp = head;
    new_node = (struct node *)malloc(sizeof(struct node));

    strcpy(new_node->first_name, fname);
    strcpy(new_node->middle_name, mname);
    strcpy(new_node->last_name, lname);
    strcpy(new_node->phone_number, pn);
    strcpy(new_node->email_address, ea);
    for (i = 1; i < loc; i++)
        temp = temp->next;
    new_node->next = temp->next;
    temp->next->prev = new_node;
    temp->next = new_node;
    new_node->prev = temp;
}

void insert_end(char fname[20], char mname[20], char lname[20], char pn[20], char ea[30])
{
    struct node *new_node, *temp;
    temp = head;
    new_node = (struct node *)malloc(sizeof(struct node));

    strcpy(new_node->first_name, fname);
    strcpy(new_node->middle_name, mname);
    strcpy(new_node->last_name, lname);
    strcpy(new_node->phone_number, pn);
    strcpy(new_node->email_address, ea);
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new_node;
    new_node->prev = temp;
    new_node->next = NULL;
}

