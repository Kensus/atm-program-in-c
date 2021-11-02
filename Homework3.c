/*
Homework3 is a c program to implement the
    algorithm(user interfave ) and
    sub-algorithms described in  Homework2

Homework4 implements  
  (1)functions to stop using the vending machine,(2)check the balance,
  and (3)withdraw money from the account. The balance is stored 
  in a variable and the withdrawal of money changes the balance.

*/

#include <stdio.h>

// funtion prototypes (UI)
void displayWelcomeMessage();
int getPinNumber();
void displaySelectionMenu();

// funtion prototypes (Atm functionality)
double withdraw();
double balance();
double mobileTopUp();
void transactions();
void quitAtm();

// function main begins program execution
int main()
{
    // print welcome message to the user
    displayWelcomeMessage();

    // ask card pin from the user user
    getPinNumber();

    // dispaly selection menu given the user pin number
    displaySelectionMenu();

    return 0;
}

// display an invitation messager  and check if the card is inserted
void displayWelcomeMessage()
{
    int cardStatus = 0; // store card status

    // Prompt user untill the card is isterted
    while (cardStatus != 1)
    {
        printf("%s", "Welcome inserts card, thank you (Enter 1 to insert card) \n");
        scanf("%d", &cardStatus);
        /* code */
    }
}

// get user pin number to continue with atm operation
int getPinNumber()
{
    int pinRecord = 1234;
    int pinNumber = 0;
    // prompt user for pin input
    printf("%s", "Enter pin number and press enter\n");
    scanf("%d", &pinNumber);

    if (pinNumber <= 0) // check if 4 integers
    {
        // check for negative input
        while (pinNumber != pinRecord)
        {
            printf("%s", "Enter pin number and press enter\n");
            scanf("%d", &pinNumber);
        }
    }
    else
    {
        puts("invalid pin number");
    }

    return pinNumber;
}

// dispaly main menu for a choice selection if pin number is correct
void displaySelectionMenu()
{
    int selection = 0; // store user selection

    while (selection != 1 && selection != 2 && selection != 3 &&
           selection != 4 && selection != 5)
    {
        printf("%s", "\nMake a selection \n");
        printf("%s", "1) Withdraw\n");
        printf("%s", "2) Balance\n");
        printf("%s", "3) Mobile top up\n");
        printf("%s", "4) Transactions\n");
        printf("%s", "5) Quit Atm \n");

        scanf("%d", &selection);
    }
    printf("selected action is = %d\n", selection);
    switch (selection)
    {
    case 1:
        withdraw();
        break;
    case 2:
        balance();
        break;
    case 3:
        mobileTopUp();
        break;
    case 4:
        transactions();
        break;
    case 5:
        break;
    default:
        return;
    }

    // printf("selection = %d", selection);
}

// menu functions
double withdraw()
{
    int selection = 0;
    // wait for the user to make a selection
    while (selection != 1 && selection != 2 && selection != 3 &&
           selection != 4 && selection != 5 && selection != 6 && selection != 7 &&
           selection != 8)
    {
        printf("select amount to withdraw\n");
        printf("\n%s", "1) 20");
        printf("\n%s", "2) 40");
        printf("\n%s", "3) 60");
        printf("\n%s", "4) 90");
        printf("\n%s", "5) 140");
        printf("\n%s", "6) 240");
        printf("\n%s", "7) Other amount");
        printf("\n%s", "8) Start\n");

        scanf("%d", &selection);
    }
    printf("selected action is = %d", selection);
    // switch(selection)
    // {
    //     // switch withdraw selection will be here
    // }
}

// show balance function
double balance()
{
    printf("%s", "Account balance inplementation will be here \n");
}
double mobileTopUp()
{
    printf("%s", "Mobile top up inplementation will be here \n");
}

// display balance to the user on screen
void transactions()
{
    double deposit = 0.00;  // store user deposits
    double widthraw = 0.00; // store users widthrawals

    printf("\nTransactions");
    printf("\n+%.2f\n", deposit);
    printf("-%.2f\n", widthraw);
}
// quit when user gives quit selection
void quitAtm()
{
    // go back to maint menu
    
}
