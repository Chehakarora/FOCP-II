//Program to store account details and display balance.
#include<iostream>

class BankAccount{
    std::string accountHolderName;
	int accountNumber;
	double balance;
    public:
    void inputDetails(){
        std::cout<<"\nEnter Account Holder's name: ";
        std::cin>>accountHolderName;
        std::cout<<"\nEnter sccount number: ";
        std::cin>>accountNumber;
        std::cout<<"\nEnter balance: ";
        std::cin>>balance;
    }
	void displayDetails(){
        std::cout<<"\nAccount Holder's name: "<<accountHolderName<<"\nAccount Number: "<<accountNumber<<"\nBalance: "<<balance;

    }
	void deposit(double amount){
        double depositAmount;
        std::cout<<"\nBalance after depositing is: "<<balance+depositAmount;
    }
	void withdraw(double amount){
        double withdrawAmount;
        std::cout<<"\nBalance after withdrawl is: "<<balance-withdrawAmount;
    }
};