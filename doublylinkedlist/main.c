#include "DLL.h"

int main()
{
    int choice, position;
    char first_name[40], middle_name[40], last_name[40],  phone_number[20],  email_address[40];

    printf("Doubly Linked List:\n");

    while (1)
    {
        printf("\nMain Menu:\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Delete\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter first name: ");
            scanf("%s", first_name);
            printf("Enter middle name: ");
            scanf("%s", middle_name);
            printf("Enter last name: ");
            scanf("%s", last_name);
            printf("Enter Phone Number: ");
            scanf("%s", phone_number);
            printf("Enter Email Address: ");
            scanf("%s", email_address);
    printf("\nInsert at the following location: \n");
            printf("1. Beginning\n");
            printf("2. Middle\n");
            printf("3. End\n");
            printf("Enter your choice: ");
            scanf("%d", &position);
            if (position == 1)
                insert_beginning(first_name, middle_name, last_name, phone_number, email_address);
            else if (position == 2)
            {
                int loc;
                printf("Enter the location: ");
                scanf("%d", &loc);
                insert_middle(first_name, middle_name, last_name, phone_number, email_address, loc);
            }
            else
                insert_end(first_name, middle_name, last_name, phone_number, email_address);
            break;

        case 2:
            display();
            break;

        case 3:
            printf("1. Beginning\n");
            printf("2. Middle\n");
            printf("3. End\n");
            printf("Choose the position you want to delete: ");

            scanf("%d", &choice);
            if (choice == 1)
                delete_beginning();
            else if (choice == 2)
            {
                int loc;
                printf("Enter the Element: ");
                scanf("%d", &loc);
                delete_middle(loc);
            }
            else
                delete_end();
            break;


        case 4:
            exit(0);

        default:
            printf("Invalid choice.\n");
            break;
        }
    }

    return 0;
}
