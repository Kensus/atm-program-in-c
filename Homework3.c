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
double getAmount();
void printAccountInformation();

// funtion prototypes (Atm functionality)
double withdrawal();
void checkBalance();
double mobileTopUp();
void transactions();
void stopAtm();

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
        printf("%s", "\tWelcome inserts card, thank you \n\t(Enter 1 to insert card)\n");
        scanf("%d", &cardStatus);
    }
}

// get user pin number to continue with atm operation
int getPinNumber()
{
    int pinRecord = 1234;
    int pinNumber = 0;
    // prompt user for pin input
    printf("%s", "\tEnter pin number and press enter\n");
    scanf("%d", &pinNumber);

    if (pinNumber <= 0) // check if 4 integers
    {
        // check for negative input
        while (pinNumber != pinRecord)
        {
            printf("%s", "\nEnter pin number and press enter\n");
            scanf("%d", &pinNumber);
        }
    }
    else
    {
        puts("\ninvalid pin number\n");
    }

    return pinNumber;
}

// dispaly main menu for a choice selection if pin number is correct
void displayMainMenu()
{
    int selection = 0; // store user selection
                       // prompt user for a selection
    while (selection != 1 && selection != 2 && selection != 3 &&
           selection != 4 && selection != 5)
    {
        printf("%s", "\tSelect\n");
        printf("%s", "\t[1] Cash\n");
        printf("%s", "\t[2] Balance\n");
        printf("%s", "\t[3] Mobile top up\n");
        printf("%s", "\t[4] Deposite\n");
        printf("%s", "\t[5] Transactions\n");
        printf("%s", "\t[6] Stop Atm \n");

        scanf("%d", &selection);
    }

    // switch according to the users selection
    switch (selection)
    {
    case 1:
        withdrawal();
        break;
    case 2:
        checkBalance();
        break;
    case 3:
        mobileTopUp();
        break;
    case 4:
        getAmount();
        break;
    case 5:
        transactions();
        break;
    case 6:
        stopAtm();
        break;
    default:
        return;
    }

    // printf("selection = %d", selection);
}

// asummed user accout deposit
double getAmount()
{
    double totalAmount = 0.0; // existing amount
    double deposite = 0.0;    // new deposite

    // prompt user for account deposite
    while (deposite >= 0)
    {
        printf("%s", "Enter amount (or -1 to quit)\n");
        scanf("%lf", &deposite);

        // check that the deposit is non-negative
        if (deposite >= 0.00)
        {
            totalAmount += deposite; // accumulate deposit plus total amount

            // a +=b  -> a = a +b;
        }

        printf("%.2lf\n", totalAmount);
    }

    return totalAmount;
}

// menu functions
double withdrawal()
{
    int selection = 0;
    // wait for the user to make a selection
    while (selection != 1 && selection != 2 && selection != 3 &&
           selection != 4 && selection != 5 && selection != 6 && selection != 7 &&
           selection != 8)
    {
        printf("\tWithdrawal\n");
        printf("\n%s", "\t[1] 20");
        printf("\n%s", "\t[2] 40");
        printf("\n%s", "\t[3] 60");
        printf("\n%s", "\t[4] 90");
        printf("\n%s", "\t[5] 140");
        printf("\n%s", "\t[6] 240");
        printf("\n%s", "\t[7] Other amount");
        printf("\n%s", "\t[8] Start\n");

        scanf("%d", &selection);
    }
    // switch user selection
    switch (selection)
    {
    case 1:
        double selection_1 = 20.0; // select amount
                                   // withdrawal = getAccountDeposit() - 20;
        printf("Amount :\t EUR %.2lf\n", selection_1);
        printAccountInformation();
        break;

    case 2:
        double selection_2 = 40.0; // select amount
        printf("Amount :\t EUR %.2lf\n", selection_2);
        break;
    case 3:
        double selection_3 = 60.0; // select amount
        printf("Amount :\t EUR %.2lf\n", selection_3);
        break;
    case 4:
        double selection_4 = 90.0; // select amount
        printf("Amount :\t EUR %.2lf\n", selection_4);
        break;
    case 5:
        double selection_5 = 140.0; // select amount
        printf("Amount :\t EUR %.2lf\n", selection_5);
        break;
    case 6:
        double selection_6 = 240.0; // select amount
        printf("Amount :\t EUR %.2lf\n", selection_6);
        break;
    case 7:
        // promt user to enter a new amount 
        double selection_7 = getAmount();
        printf("Other amount :\t EUR %.2lf\n", selection_7);
        // getWithdrawalAmount
        break;
    case 8:
        displayMainMenu();
        break;
    default:
        break;
    }
}
// // other amount withdrawals
// double getOtherAmount()
// {

//     double amount = 0.0; // store user amount input
//     while (amount >= 0)
//     {
//         /* code */
//     }

//     printf("\tEnter other amount\n");
//     scanf("%lf",&amount);

// }

// show current account balance
void checkBalance()
{
    // balance =  amount deposited - withdrawal
    double balance = 0.0; // current amount

    printf("Amount:\tEUR %.2lf\n", balance);
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
        printf("\n%s", "\t[1] Screen");
        printf("\n%s", "\t[2] Receipt");
        printf("\n%s", "\t[3] No thankyou\n");

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
void stopAtm()
{
    // go back to maint menu
    displayMainMenu();
}
