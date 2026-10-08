#include <stdio.h>

int main(void)
{
    int choice;

    do
    {
        printf("\n===== Bus Booking Menu =====\n");
        printf("1. View buses\n");
        printf("2. Book a bus\n");
        printf("3. Cancel a booking\n");
        printf("4. Search for a bus\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");

        int input_result = scanf("%d", &choice);
        if (input_result == EOF)
        {
            printf("\nInput ended. Exiting the bus booking system.\n");
            break;
        }
        if (input_result != 1)
        {
            printf("Invalid input. Please enter a number from 1 to 5.\n");
            int character;
            while ((character = getchar()) != '\n' && character != EOF)
            {
                /* Discard the rest of the invalid input line. */
            }
            continue;
        }

        switch (choice)
        {
            case 1:
                printf("\nShowing available buses...\n");
                break;
            case 2:
                printf("\nBooking a bus...\n");
                break;
            case 3:
                printf("\nCancelling a booking...\n");
                break;
            case 4:
                printf("\nSearching for a bus...\n");
                break;
            case 5:
                printf("\nThank you for using the bus booking system. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice. Please select an option from 1 to 5.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}