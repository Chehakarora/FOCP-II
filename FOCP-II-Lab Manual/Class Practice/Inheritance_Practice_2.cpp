/*Create a class Account with account number and balance.
Add a function displayAccount().
Derive a class SavingsAccount that includes interest rate and a function calculateInterest().
Demonstrate usage of both classes.*/
#include<iostream>

class Account{
    std::string accountnumber;
    protected: 
    float balance;
    public:
    Account(){
        std::cout<<"\n Account Default";
        accountnumber="0000000000";
        balance=0;
    }
    Account(std::string accno, int balance){
        std::cout<<"\n Account Parametrized";
        accountnumber=accno;
        this->balance=balance;
    }
    void displayAccount(){
        std::cout<<"\n Account number: "<<accountnumber<<"\n Balance: "<<balance;
    }
};

class SavingsAccount: public Account{
    float interestrate;
    public:
    SavingsAccount(){
        std::cout<<"\n SavingsAccount Default";
        interestrate=2.5;
    }
    SavingsAccount(std::string acno, float blnce, float interestrate): Account(acno,blnce){
        std::cout<<"\n SavingsAccount Paramterized";
        this->interestrate=interestrate;
    }
    void displaySavingsAccount(){
        displayAccount();
        std::cout<<"\n Total balance after interest: "<<(balance*interestrate)/100; 
    }
};

int main(){
    SavingsAccount s1,s2("34547586", 465759, 7.5);
    s2.displaySavingsAccount();

    return 0;
}