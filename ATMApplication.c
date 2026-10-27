#include <stdio.h>

void main()
{
    int choice;
    float balance, amount;

    printf("Enter your account balance: ");
    scanf("%f", &balance);

    printf("\n1. Balance Inquiry");
    printf("\n2. Cash Withdrawal");
    printf("\n3. Cash Deposit");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Current balance = Rs. %f\n", balance);
            break;

        case 2:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount <= balance && amount > 0)
            {
                balance = balance - amount;
                printf("Transaction successful\n");
                printf("Remaining balance = Rs. %f\n", balance);
            }
            else
            {
                printf("Insufficient balance\n");
            }
            break;

        case 3:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                balance = balance + amount;
                printf("Deposit successful\n");
                printf("Updated balance = Rs. %f\n", balance);
            }
            else
            {
                printf("Invalid deposit amount\n");
            }
            break;

        default:
            printf("Invalid option\n");
    }

}
