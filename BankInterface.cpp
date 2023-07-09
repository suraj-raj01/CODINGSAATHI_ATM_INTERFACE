/* 
TASK:- ATM INTERFACE 
Which is provided by Coding Saathi
Intern:- Suraj Kumar
*/
#include <iostream>
using namespace std;
int main()
{
     //main function
     int option, pin;
     string accountHolderName;
     double balance, deposite, withdraw;
     string password;
     balance = 1000;
     // string transactionHistory ="";
     cout << "\n\tEnter Account Holder Name: ";
     cin >> accountHolderName;
     cout<<"\tEnter your Password: ";
     cin>>password;
     //condition check
     if (password == "SURAJ123")
     {
          do
          {
               cout << "\n\t ______________________________";
               cout << "\n\t|                              |";
               cout << "\n\t| WELCOME IN OUR ATM INTERFACE |";
               cout << "\n\t|______________________________|";
               cout << "\n\t|       1.) Check Balance      |";
               cout << "\n\t|       2.) Deposite           |";
               cout << "\n\t|       3.) Withdraw           |";
               cout << "\n\t|       4.) Transfer           |";
               cout << "\n\t|       5.) History            |";
               cout << "\n\t|       6.) Exit               |";
               cout << "\n\t|______________________________|";
               cout << "\n\n\tPlease Choose an Option: ";
               cin >> option;
               //switch case
               switch (option)
               {
               case 1:
                    cout << "\tEnter your PIN: ";
                    cin >> pin;
                    if (pin == 1234)
                    {
                         cout << "\tYour Balance is: $" << balance << endl;
                         break;
                    }
                    else
                    {
                         cout << "\tInvalid PIN Please try again!" << endl;
                         break;
                    }
               case 2:
                    cout << "\tEnter your PIN: ";
                    cin >> pin;
                    if (pin == 1234)
                    {
                         cout << "\tAmount you want to deposit: $";
                         cin >> deposite;
                         balance += deposite; // balance = balancd+deposite;
                         cout << "\tYour current Balance: $" << balance << endl;
                         break;
                    }
                    else
                    {
                         cout << "\tInvalid PIN Please try again!" << endl;
                         break;
                    }
               case 3:
                    cout << "\tEnter your PIN: ";
                    cin >> pin;
                    if (pin == 1234)
                    {
                         cout << "\tHow much do you want to withdrow?: $";
                         cin >> withdraw;
                         if (balance < withdraw)
                         {
                              cout << "\tYou do not have Enough money in your account to withdraw" << endl;
                              break;
                         }
                         else
                         {
                              balance -= withdraw; // balance = balance-withdraw;
                              cout << "\tYour current balance: $" << balance << endl;
                              break;
                         }
                    }
                    else
                    {
                         cout << "\tInvalid PIN Please try again!\n";
                         break;
                    }
               case 4:
                    cout << "\tEnter your PIN: ";
                    cin >> pin;
                    if (pin == 1234)
                    {
                         int transfer;
                         long double account;
                         string userid;
                         cout << "\tEnter user account number: ";
                         cin >> account;
                         cout << "\tEnter user name: ";
                         cin >> userid;
                         cout << "\tenter the amount: $";
                         cin >> transfer;

                         if (transfer > balance)
                         {
                              cout << "\tYou do not have Enough money in your account to transfer" << endl;
                              break;
                         }
                         else
                         {
                              balance = balance - transfer;
                              cout << "\tyour current balance is: $" << balance;
                              break;
                         }
                    }
                    else
                    {
                         cout << "\tInvalid PIN Please try again!" << endl;
                         break;
                    }
               case 5:
                     cout<<"\tEnter your PIN: ";
                     cin>>pin;
                     if(pin==1234){
                         cout<<"\t"<<char(2)<<" "<<char(2)<<" Sorry! This feature is currently unavailable!"<<endl;
                         break;
                     }
                     else{
                         cout<<"Please enter valid PIN";
                         break;
                     }
               case 6:
                    exit(0);
                    break;
               default:
                    if (option != 6)
                    {
                         cout << "\tInvalid option please try again" << endl;
                         break;
                    }
               }
          } 
          while (option != 6);
          system("pause");
     }
     else
     {
          cout << "\tInvalid Password!!";
     }
     return 0;
}

//Thank You 🥰🥰