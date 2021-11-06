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
void displayMainMenu();
double getAccoutDeposit();
void printAccountInformation();

// funtion prototypes (Atm functionality)
double withdraw();
void checkBalance();
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
    displayMainMenu();

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
void displayMainMenu()
{
    int selection = 0; // store user selection

    while (selection != 1 && selection != 2 && selection != 3 &&
           selection != 4 && selection != 5)
    {
        printf("%s", "\nMake a selection \n");
        printf("%s", "1) Withdraw\n");
        printf("%s", "2) Balance\n");
        printf("%s", "3) Mobile top up\n");
        printf("%s", "4) Deposite\n");
        printf("%s", "5) Transactions\n");
        printf("%s", "6) Quit Atm \n");

        scanf("%d", &selection);
    }
    printf("selected action is = %d\n", selection);
    switch (selection)
    {
    case 1:
        withdraw();
        break;
    case 2:
        checkBalance();
        break;
    case 3:
        mobileTopUp();
        break;
    case 4:
        getAccoutDeposit();
        break;
    case 5:
        transactions();
        break;
    case 6:
        quitAtm();
        break;
    default:
        return;
    }

    // printf("selection = %d", selection);
}

// asummed user accout deposit
double getAccoutDeposit()
{
    double totalAmount = 0.0; // existing amount
    double deposite = 0.0;    // new deposite

    // prompt user for account deposite
    while (deposite >= 0)
    {
        printf("%s", "Enter deposite amount (or -1 to quit)\n");
        scanf("%lf", &deposite);

        // check that the deposit is non-negative
        if (deposite >= 0.00)
        {
            totalAmount += deposite; // accumulate deposit plus total amount

            // a +=b  -> a = a +b;
        }

        printf("%lf\n", totalAmount);
    }

    return totalAmount;
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
        printf("\nselect amount to withdraw\n");
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
    printf("selected action is = %d\n", selection);
    switch (selection)
    {
    case 1:
        printAccountInformation();
        break;

    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        displayMainMenu();
        break;
    default:
        break;
    }
}

// show current account balance
void checkBalance()
{
    // just show balance
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

// How to print account information
void printAccountInformation()
{
    int information = 0; // stote user selection
    while (information != 1 && information != 2 && information != 3)
    {
        printf("Do you need account information?\n");
        printf("\n%s", "1) Screen");
        printf("\n%s", "2) Receipt");
        printf("\n%s", "3) No thankyou\n");

        scanf("%d", &information);
    }
    // promt user to select information display option
    switch (information)
    {
    case 1:
        /* take card -> take money
        -> print Withdraw :
         "Thanks for visiting" -> "Welcome again"-> "check again"
         */
        printf("%s%s%s%s", "\tOtto\n", "Thanks for visiting\n", "Welcome again\n", "check again\n");

        break;
    case 2:
        /* take card -> take money -> take receipt
         -> print Withdraw :
          "Thanks for visiting" -> "Welcome again"-> "check again"
          */
        printf("%s%s%s%s", "\tOtto\n", "Thanks for visiting\n", "Welcome again\n", "check again\n");
        break;
    case 3:
        /* take card -> take money
         -> print Withdraw :
          "Thanks for visiting" -> "Welcome again"-> "check again"
          */
        printf("%s%s%s%s", "\tOtto\n", "Thanks for visiting\n", "Welcome again\n", "check again\n");
        break;
    default:
        break;
    }
}
// go to the main menu when user gives quit selection
void quitAtm()
{
    // go back to maint menu
    displayMainMenu();
}
