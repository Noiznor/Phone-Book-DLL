#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>


struct node
{
    char first_name[30];
    char middle_name[30];
    char last_name[30];
    char phone_number[20];
    char email_address[30];
    struct node *prev;
    struct node *next;
};

struct node *head;

void insert_beginning(char first_name[], char middle_name[], char last_name[], char phone_number[], char email_address[]);
void insert_end(char first_name[], char middle_name[], char last_name[], char phone_number[], char email_address[]);
void insert_middle(char first_name[], char middle_name[], char last_name[], char phone_number[], char email_address[], int position);
void display();
void delete_beginning();
void delete_end();
void delete_middle(int position);


#endif // DLL_H_INCLUDED

