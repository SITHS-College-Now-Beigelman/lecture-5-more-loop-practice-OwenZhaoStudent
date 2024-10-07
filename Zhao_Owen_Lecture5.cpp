//Owen Zhao
//10/07/24
//Lecture 5: More Loops

#include <iostream>
#include <Iomanip>
#include <string>

using namespace std;

int main() {
    //Making variables for bank account money at the start of the day, the number od transactions, and the debit and credit inital amount for the day
    double Account;
    double Transactions;
    double Debit = 0;
    double Credit = 0;
    string Type;
    double Money;

    
    //Asks user to input how much money they had in their bank account at the start of the day
    cout << "How much money did you have in your bank account at the start of the day? ";
    cin >> Account;

    //Asks user to input how many transactions they made throughout the day
    cout << "How many bank transactions did you complete during the day? ";
    cin >> Transactions;

    //Loop will keep looping as long as the number of transactions isn't zero
    while (Transactions != 0)
    {
        //Asking user to input what kind of transaction they made
        cout << "What type of transaction did you make? ";
        cin >> Type;

        //Asking user to input how much money was in the transaction
        cout << "How much money was in the transaction? ";
        cin >> Money;

        //If the transaction was debit then the amount of money will be subtracted from the bank account and that amount will be the new amount of money in the bank account
        if (Type == "Debit")
        {
            Account = Account - Money;
            cout << "The money in your account after this transaction is: " << Account << endl;
            Debit = Debit + Money;
            
        }

        //If the transaction was credit then the amount of money will be added from the bank account and that amount will be the new amount of money in the bank account
        else if (Type == "Credit")
        {
            Account = Account + Money;
            cout << "The money in your account after this transaction is: " << Account << endl;
            Credit = Credit + Money;
        }

        //If the user made a typo the loop will reset as they didnt make a real transaction type
        else
        {
            cout << "That is not a real type of transaction! ";
        }

        //The amount of transactions will subtract by 1 and they will have 1 less transaction to make
        Transactions = Transactions - 1;
        cout << "You have " << Transactions << " transactions left... " << endl;

    }

    //In the end of code prints out total amount of money in bank account, the total amount of debit and credit amounts for the day
    cout << "The total money left in your account is: " << setprecision(4) << Account << endl;
    cout << "Here are your total debit amounts for the day: $" << setprecision(4) << Debit << endl;
    cout << "Here are your total credit amounts for the day: $" << setprecision(4) << Credit << endl;

return 0;
}

/*
How much money did you have in your bank account at the start of the day? 150
How many bank transactions did you complete during the day? 5
What type of transaction did you make? Credit
How much money was in the transaction? 55
The money in your account after this transaction is: 205
You have 4 transactions left...
What type of transaction did you make? Debit
How much money was in the transaction? 25
The money in your account after this transaction is: 180
You have 3 transactions left...
What type of transaction did you make? Credit
How much money was in the transaction? 5
The money in your account after this transaction is: 185
You have 2 transactions left...
What type of transaction did you make? Debit
How much money was in the transaction? 50
The money in your account after this transaction is: 135
You have 1 transactions left...
What type of transaction did you make? Credit
How much money was in the transaction? 50
The money in your account after this transaction is: 185
You have 0 transactions left...
The total money left in your account is: 185
Here are your total debit amounts for the day: $75
Here are your total credit amounts for the day: $110
*/